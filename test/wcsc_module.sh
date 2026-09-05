#!/bin/bash

set -e
root_dir=$(cd "$(dirname "$0")/.." && pwd -P)

echo "linux:"
exec node "$root_dir/tools/run-electron.js" "$root_dir/test/runner/addon/compiler.js" wcsc "$root_dir/test/spec/issue/137/data/example.json"
