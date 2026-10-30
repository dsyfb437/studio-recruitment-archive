# Studio Recruitment Archive

Private archive of five completed Lingrui Studio recruitment projects, assembled on 2026-10-31 with the owner's authorization.

| Directory | Original repository |
| --- | --- |
| `lr-core-binary/` | https://github.com/dsyfb437/lr-core-binary |
| `lr-fe-button/` | https://github.com/dsyfb437/lr-fe-button |
| `lr-fe-travel-diary-theme/` | https://github.com/dsyfb437/lr-fe-travel-diary-theme |
| `lr_fe_console/` | https://github.com/dsyfb437/lr_fe_console |
| `clings-recruit/` | https://github.com/dsyfb437/clings-recruit |

## Preservation method

Each directory is the exact default-branch Git tree of its source repository. All original commits, author/committer information, messages and hashes remain unchanged. Original histories are merged as parents of archive commits, without squashing or rewriting. Before the import commit, historical file paths remain at their original repository root. To inspect a project's old path history, use its `original/<project>/main` branch or its standalone bundle.

Original branches are saved as `original/<project>/<branch>`. Tags, if present, use `original/<project>/<tag>`. Additional advertised refs, if present, are retained as namespaced tags. `archive-metadata/manifest.json` records exact source and destination refs, commits, tree hashes, file counts and bundle SHA-256 hashes. Standalone bundles in `archive-metadata/bundles/` restore the original repositories with `git clone <project>.bundle <directory>`.

`archive-metadata/github/` contains snapshots of repository metadata, issues, PRs and comments, releases, workflow-run/artifact metadata, deployments, labels and milestones. These JSON snapshots are for reference and do not recreate GitHub UI records. Actions logs, artifact payloads, secrets, external hosting, user-uploaded attachments and external services are not Git history and are not preserved by this archive. No LFS pointers or historical `.gitmodules` files were found. Wiki is disabled for all five sources. Original repositories have not been deleted or modified.

## Validation

Source mirrors passed `git fsck --full --strict`. Each imported directory's Git tree hash equals its source default-branch tree, which verifies tracked paths, bytes and file modes. Every source ref and reachable commit is recorded and retained; each standalone bundle was verified. After upload, a fresh mirror is compared against this manifest and checked with `git fsck` before any deletion is considered. See `archive-metadata/verification.json` for the recorded result.
