#!/bin/bash

rm pie
sudo mkdir -p /usr/local/bin
clang ./src/cmd/main.c -o pie
sleep 2s
sudo mv pie /usr/local/bin
echo "Successfully compiled pie"
echo "Now check the install guide (https://github.com/KevinAlavik/chrome-pie/blob/main/INSTALL.md) just skip the Build and Install part. And you should be good to go"