#!/bin/bash
set -euo pipefail

root_dir=$(cd "$(dirname "$0")/../../.." && pwd -P)
version=$(node -p 'require(process.argv[1]).version' "$root_dir/node_modules/electron/package.json")
archive="electron-v$version-win32-x64.zip"
runtime_dir="$root_dir/cache/electron-v$version-win32-x64"

command -v wine >/dev/null
command -v winepath >/dev/null
for type in wcc wcsc; do
    test -f "$root_dir/test/runner/addon/win/wcc-electron/build/Release/$type.node"
done

if [ ! -f "$runtime_dir/electron.exe" ] || [ ! -f "$runtime_dir/version" ] || [ "$(cat "$runtime_dir/version")" != "$version" ]; then
    mkdir -p "$root_dir/cache"
    expected=$(node -p 'require(process.argv[1])[process.argv[2]]' "$root_dir/node_modules/electron/checksums.json" "$archive")
    if [ ! -f "$root_dir/cache/$archive" ]; then
        curl -fL --retry 3 -o "$root_dir/cache/$archive.tmp" \
            "https://github.com/electron/electron/releases/download/v$version/$archive"
        mv "$root_dir/cache/$archive.tmp" "$root_dir/cache/$archive"
    fi
    actual=$(sha256sum "$root_dir/cache/$archive")
    if [ "${actual%% *}" != "$expected" ]; then
        echo "Checksum mismatch: $root_dir/cache/$archive" >&2
        exit 1
    fi
    staging=$(mktemp -d "$root_dir/cache/electron-win32.XXXXXX")
    trap 'rm -rf "$staging"' EXIT
    unzip -q "$root_dir/cache/$archive" -d "$staging"
    # Publish only a fully extracted runtime; an interrupted unzip can be retried.
    rm -rf "$runtime_dir"
    mv "$staging" "$runtime_dir"
fi

node "$root_dir/tools/run-windows-electron.js" -e \
    'const path = require("path"); for (const type of ["wcc", "wcsc"]) { const addon = require(path.join(process.env.WX_COMPILER_ROOT, "test/runner/addon/win/wcc-electron/build/Release", type + ".node")); if (typeof addon !== "function") throw new Error("Invalid addon: " + type); } console.log("Windows Electron " + process.versions.electron + " addons ready");'
