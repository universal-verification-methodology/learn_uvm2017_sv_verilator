# Course media (pptx, pdf, video)

Generated under `media/moduleN/` from `docs/MODULEN.md` and `moduleN/EXAMPLES.md`.

## Prerequisites

Install the Cursor skill once:

```bash
bash ~/.cursor/skills/module-to-slides-video/scripts/setup.sh
```

Optional system tools: LibreOffice (`soffice`), `ffmpeg`, `poppler-utils` (`pdftoppm`).

## Build (from course repo root)

```bash
./scripts/build_all_media.sh --regenerate-outlines --run-demos
./scripts/build_all_media.sh                    # rebuild only (existing outlines)
./scripts/build_all_media.sh --module 3
./scripts/verify_all_media.sh --run-demos
```

Or call the skill directly (no course wrappers):

```bash
SKILL=~/.cursor/skills/module-to-slides-video
COURSE="$(pwd)"
bash "$SKILL/scripts/regenerate_course_outlines.sh" "$COURSE"
bash "$SKILL/scripts/build_course_media.sh" "$COURSE" --run-demos
```

## Layout per module

| File | Role |
|------|------|
| `outline.yaml` | Slide plan (auto-generated or hand-edited) |
| `script.md` | Narration / timing |
| `assets/manifest.yaml` | Screenshots and diagrams |
| `slides.pptx` / `slides.pdf` / `video.mp4` | Outputs |

Optional: `media/outline_overrides.yaml` for demo commands that need git/scaffold (see `outline_overrides.yaml.example`).

Typical full deck: **~35–45 slides** per module when using `generate_outline_from_module.py`.

## Install / refresh wrappers

If `scripts/build_all_media.sh` is missing:

```bash
bash ~/.cursor/skills/module-to-slides-video/scripts/install_course_integration.sh "$(pwd)"
```
