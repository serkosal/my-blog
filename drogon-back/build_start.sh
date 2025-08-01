#!/bin/bash

set -e # abort on errors

./tailwind_compile.sh

mkdir -p build
cd build

cmake .. && make -j$(nproc)
mv ./drogon-back ../drogon-back && cd ..
./drogon-back &
pid=$!

echo 'started drogon server on http://localhost:5555/'
wait $pid
