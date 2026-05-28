#!/usr/bin/env bash
#
# Build slides (pptx), PDF, and narrated video for all modules in this course.
# Thin wrapper — all logic lives in the module-to-slides-video skill.
#
# Usage (from course repo root):
#   ./scripts/build_all_media.sh
#   ./scripts/build_all_media.sh --regenerate-outlines
#   ./scripts/build_all_media.sh --pptx-only
#   ./scripts/build_all_media.sh --module 3
#
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
COURSE_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
SKILL_ROOT="${SKILL_ROOT:-$HOME/.cursor/skills/module-to-slides-video}"
SKILL_SCRIPTS="$SKILL_ROOT/scripts"

PPTX_ONLY=0
REGENERATE=0
INSTALL_DEPS=0
MODULES_FILTER=""
SECONDS_PER_SLIDE=8
RUN_DEMOS=1
EXTRA_ARGS=()

usage() {
  cat <<EOF
Usage: $0 [options]

Full skill pipeline:
  1. (optional) regenerate_course_outlines.sh  — docs/MODULE*.md + EXAMPLES.md
  2. build_course_media.sh                     — diagrams, captures, pptx, pdf, TTS, video

Options:
  --regenerate-outlines   Regenerate outline.yaml before build (~35–45 slides/module)
  --pptx-only             Stop after slides.pptx
  --module N              Only module N or comma list: 1,2,3
  --install-deps          sudo apt: libreoffice-impress, ffmpeg, poppler-utils
  --seconds-per-slide N   Silent video timing if no narration (default: 8)
  --no-run-demos          Skip capture commands during verify
  --no-narration          Silent video only
  --burn-captions         Burn subtitles into video
  --skip-capture          Reuse existing screenshots
  --skip-diagrams         Skip Mermaid render
  -h, --help              Show this help

Also:
  ./scripts/regenerate_media_outlines.sh
  ./scripts/verify_all_media.sh

Skill: \$SKILL_ROOT (override with SKILL_ROOT=/path/to/skill)
EOF
}

log() { echo "==> $*"; }
die() { echo "ERROR: $*" >&2; exit 1; }

while [[ $# -gt 0 ]]; do
  case "$1" in
    --pptx-only) PPTX_ONLY=1; shift ;;
    --regenerate-outlines) REGENERATE=1; shift ;;
    --install-deps) INSTALL_DEPS=1; shift ;;
    --module) MODULES_FILTER="$2"; shift 2 ;;
    --seconds-per-slide) SECONDS_PER_SLIDE="$2"; shift 2 ;;
    --no-run-demos) RUN_DEMOS=0; shift ;;
    -h|--help) usage; exit 0 ;;
    *) EXTRA_ARGS+=("$1"); shift ;;
  esac
done

[[ -d "$SKILL_SCRIPTS" ]] || die "Skill not found: $SKILL_SCRIPTS"

install_system_deps() {
  log "Installing system packages (sudo required)..."
  sudo DEBIAN_FRONTEND=noninteractive apt-get update -qq
  sudo DEBIAN_FRONTEND=noninteractive apt-get install -y -qq \
    libreoffice-impress libreoffice-core libreoffice-writer \
    default-jre-headless ffmpeg poppler-utils
}

[[ $INSTALL_DEPS -eq 1 ]] && install_system_deps

log "Course: $COURSE_ROOT"
log "Skill:  $SKILL_ROOT"
bash "$SKILL_SCRIPTS/setup.sh" | tail -3

if [[ $REGENERATE -eq 1 ]]; then
  log "Regenerating outlines..."
  bash "$SCRIPT_DIR/regenerate_media_outlines.sh"
fi

BUILD_ARGS=("$COURSE_ROOT")
[[ -n "$MODULES_FILTER" ]] && BUILD_ARGS+=(--module "$MODULES_FILTER")
[[ $PPTX_ONLY -eq 1 ]] && BUILD_ARGS+=(--pptx-only)
[[ $RUN_DEMOS -eq 1 ]] && BUILD_ARGS+=(--run-demos)
BUILD_ARGS+=(--seconds-per-slide "$SECONDS_PER_SLIDE")
BUILD_ARGS+=("${EXTRA_ARGS[@]}")

log "Building media..."
bash "$SKILL_SCRIPTS/build_course_media.sh" "${BUILD_ARGS[@]}"

log "Slide counts:"
for o in "$COURSE_ROOT"/media/module*/outline.yaml; do
  [[ -f "$o" ]] || continue
  mod="$(basename "$(dirname "$o")")"
  mod="${mod#module}"
  c=$(grep -c "type:" "$o" 2>/dev/null || echo 0)
  echo "  module $mod: $c slides"
done

log "Verify (optional): ./scripts/verify_all_media.sh"
echo "Done. Review: $COURSE_ROOT/media/"
