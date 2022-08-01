#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 "$1" "$2" -o "$2"

