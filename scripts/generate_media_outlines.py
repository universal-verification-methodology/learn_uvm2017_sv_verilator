#!/usr/bin/env python3
"""Regenerate outlines via the module-to-slides-video skill (legacy CLI name)."""

from __future__ import annotations

import subprocess
import sys
from pathlib import Path

SKILL = (
    Path.home()
    / ".cursor/skills/module-to-slides-video/scripts/regenerate_course_outlines.sh"
)


def main() -> int:
    """Delegate to skill regenerate_course_outlines.sh."""
    if not SKILL.is_file():
        print(
            "ERROR: skill not found. Install: ~/.cursor/skills/module-to-slides-video",
            file=sys.stderr,
        )
        return 1
    course = Path(__file__).resolve().parents[1]
    cmd = ["bash", str(SKILL), str(course), *sys.argv[1:]]
    return subprocess.call(cmd)


if __name__ == "__main__":
    sys.exit(main())
