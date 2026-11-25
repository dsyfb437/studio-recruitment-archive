# Studio Recruitment Archive

Public archive of five completed Lingrui Studio recruitment projects, assembled on 2026-10-31 with the owner's authorization.

| Directory | Original repository |
| --- | --- |
| `lr-core-binary/` | https://github.com/dsyfb437/lr-core-binary |
| `lr-fe-button/` | https://github.com/dsyfb437/lr-fe-button |
| `lr-fe-travel-diary-theme/` | https://github.com/dsyfb437/lr-fe-travel-diary-theme |
| `lr_fe_console/` | https://github.com/dsyfb437/lr_fe_console |
| `clings-recruit/` | https://github.com/dsyfb437/clings-recruit |

## Preservation method

Each directory contains the source repository’s default-branch files. The five project histories are preserved. In lr_fe_console, the saved CSRF value and browser cookie screenshot are redacted throughout the public history and in its standalone bundle. Four original project branch tips retain their original hashes. Original histories are merged as parents of archive commits, without squashing or rewriting. Before the import commit, historical file paths remain at their original repository root. To inspect a project's old path history, use its `original/<project>/main` branch or its standalone bundle.

Original branches are saved as `original/<project>/<branch>`. Tags, if present, use `original/<project>/<tag>`. Additional advertised refs, if present, are retained as namespaced tags. `archive-metadata/manifest.json` records exact source and destination refs, commits, tree hashes, file counts and bundle SHA-256 hashes. Standalone bundles in `archive-metadata/bundles/` restore the original repositories with `git clone <project>.bundle <directory>`.

`archive-metadata/github/` contains snapshots of repository metadata, issues, PRs and comments, releases, workflow-run/artifact metadata, deployments, labels and milestones. These JSON snapshots are for reference and do not recreate GitHub UI records. Available Actions log ZIPs and unexpired artifact ZIPs (including recruitment score sheets) are saved under `workflow-files/`; successful downloads and any unavailable files are listed in `archive-metadata/github/workflow-downloads.json`. Secrets, external hosting, user-uploaded attachments and external services are not preserved by this archive. No LFS pointers or historical `.gitmodules` files were found. Wiki is disabled for all five sources. Following successful archive verification and explicit owner confirmation, the five original repositories were deleted on 2026-10-31 (Asia/Shanghai). See `archive-metadata/deletion-result.json`.

## Validation

The manifest lists the public project refs, trees and standalone bundle checksums. Earlier verification and deletion records document the original private archive.
