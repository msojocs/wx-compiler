#!/bin/bash

root_dir=$(cd `dirname $0`/.. && pwd -P)

echo "linux:"
$root_dir/cache/nwjs-sdk-v0.55.0-linux-x64/nw $root_dir/test/runner/nwjs/compiler.js wcsc $root_dir/test/spec/issue/137/data/example.json
