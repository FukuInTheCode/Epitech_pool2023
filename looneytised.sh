#!/bin/bash

sed -e "s/theo1/Wile E. Coyote/ig" -e "s/steven1/Daffy Duck/ig" -e "s/arnaud1/Porky Pig/ig" -e "s/pierre-jean/Marvin the Martian/ig" | grep "Marvin the Martian\|Wile E. Coyote\|Daffy Duck\|Porky Pig" 
