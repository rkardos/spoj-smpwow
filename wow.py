# Read number of o letters from console (input)
numberOfOs = input("")

# Create empty string (text) container
oLetters = ''

# In loop, for number of times specified in input 
for i in range(0, int(numberOfOs)):
  # Keep concatenating (gluing) additional 'o' letter to our initially empty string
  oLetters += 'o'

# Show result, by replacing the '%s' part with out string of concatenated 'o' letters
print("W%sw" % (oLetters))