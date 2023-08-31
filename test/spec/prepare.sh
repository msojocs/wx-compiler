#! /bin/bash

set -e
test_dir=$(cd `dirname $0`/.. && pwd -P)

project_dir="$test_dir/projects"

for dir in "$project_dir"/*; do
    if [ -d "$dir" ]; then
        name="${dir##*/}"
        "$test_dir/spec/prepare/$name"
    fi
done