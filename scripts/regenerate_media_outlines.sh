#!/usr/bin/env bash
# Regenerate media/moduleN from docs/MODULEN.md + moduleN/EXAMPLES.md (skill generator).
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
COURSE_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
SKILL="${SKILL_ROOT:-$HOME/.cursor/skills/module-to-slides-video}"
exec "$SKILL/scripts/regenerate_course_outlines.sh" "$COURSE_ROOT" "$@"
