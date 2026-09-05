#!/bin/bash
set -euo pipefail

cd "$(dirname "$0")"
npm_config_target=$(node -p "require('electron/package.json').version")
npm_config_arch=${npm_config_arch:-$(node -p 'process.arch')}
export npm_config_target npm_config_arch
export npm_config_target_arch=$npm_config_arch
export npm_config_runtime=electron
export npm_config_disturl=https://electronjs.org/headers
export npm_config_build_from_source=true
pnpm exec node-gyp rebuild --loglevel verbose
