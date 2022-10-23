#!/bin/bash

# Read number of o letters from console (input)
read -r number_of_o_letters

# Create empty string (text) container
o_letters=""

# In loop, for number of times specified in input 
for (( i=0; i<$number_of_o_letters; i++ ))
do
    # Keep contatenating (gluing) additional 'o' letter to our initially empty string
    o_letters="${o_letters}o"
done

# Show result in one line, by first showing the 'W' letter, then  out string of concatenated 'o' letters and finally the last 'w' letter
echo "W${o_letters}w"