#!/usr/bin/env bash
# Verify media assets for all modules (or selected modules).
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
COURSE_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
SKILL_SCRIPTS="${SKILL_ROOT:-$HOME/.cursor/skills/module-to-slides-video}/scripts"

MODULES_FILTER=""
RUN_DEMOS=0

while [[ $# -gt 0 ]]; do
  case "$1" in
    --module) MODULES_FILTER="$2"; shift 2 ;;
    --run-demos) RUN_DEMOS=1; shift ;;
    -h|--help)
      echo "Usage: $0 [--module N|1,2,3] [--run-demos]"
      exit 0
      ;;
    *) echo "Unknown: $1" >&2; exit 1 ;;
  esac
done

[[ -d "$SKILL_SCRIPTS" ]] || { echo "Skill not found: $SKILL_SCRIPTS" >&2; exit 1; }

discover_modules() {
  local mods=() f n
  shopt -s nullglob
  for f in "$COURSE_ROOT"/docs/MODULE*.md; do
    n="$(basename "$f" .md)"
    n="${n#MODULE}"
    [[ "$n" =~ ^[0-9]+$ ]] || continue
    mods+=("$n")
  done
  shopt -u nullglob
  if [[ ${#mods[@]} -eq 0 ]]; then
    for d in "$COURSE_ROOT"/media/module*/; do
      [[ -d "$d" ]] || continue
      n="$(basename "$d")"
      n="${n#module}"
      [[ "$n" =~ ^[0-9]+$ ]] && mods+=("$n")
    done
  fi
  printf '%s\n' "${mods[@]}" | sort -n -u
}

should_run() {
  local n="$1"
  [[ -z "$MODULES_FILTER" ]] && return 0
  local p
  IFS=',' read -ra parts <<<"$MODULES_FILTER"
  for p in "${parts[@]}"; do
    [[ "$(echo "$p" | tr -d ' ')" == "$n" ]] && return 0
  done
  return 1
}

fail=0
while IFS= read -r n; do
  [[ -n "$n" ]] || continue
  should_run "$n" || continue
  media="$COURSE_ROOT/media/module$n"
  [[ -d "$media" ]] || { echo "SKIP: no $media"; continue; }
  args=(--media-dir "$media" --course-root "$COURSE_ROOT")
  [[ $RUN_DEMOS -eq 1 ]] && args+=(--run-demos)
  if ! "$SKILL_SCRIPTS/run_python.sh" "$SKILL_SCRIPTS/verify_media.py" "${args[@]}"; then
    ((fail++)) || true
  fi
done < <(discover_modules)

[[ $fail -eq 0 ]] && echo "All media checks passed." || { echo "$fail module(s) failed." >&2; exit 1; }
