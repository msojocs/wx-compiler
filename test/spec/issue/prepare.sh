#! /bin/bash

test_dir=$(cd `dirname $0`/../.. && pwd -P)
project_dir="$test_dir/spec/issue"

cd "$project_dir"
echo "prepare for ${project_dir}"

for dir in "$project_dir"/*; do
    if [ -d "$dir" ]; then
      if [ -f "$dir/prepare.sh" ]; then
        "$dir/prepare.sh"
      fi
    fi
done