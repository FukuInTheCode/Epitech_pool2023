#!/bin/bash



tail -n +2 | ./skip.sh  | cut -d: -f 1 | rev | sort -r | head -n $MY_LINE2 | tail -n +$MY_LINE1 | sed -z 's/\n/, /g;s/, $/.\n/'


