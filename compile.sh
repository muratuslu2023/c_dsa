#!/bin/zsh
#DIR="$(pwd)/app"
#${DIR}
gcc main.c src/linear/*.c -Iinclude -o app
./app


