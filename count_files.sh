#! /bin/bash

find -type f ! -path "*/.*" ! -name "*.sh" | wc -l
