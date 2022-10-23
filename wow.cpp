#include <iostream> // cin and cout are defined in iostream

// All programs in C++ language must execute in the main function
int main() {
  // Read number of 'o' letters from console (input)
  int number_of_o_letters;
  std::cin >> number_of_o_letters;
 
  // Create empty string (text) variable (data container)
  std::string o_letters;

  // In loop, for number of times specified in input 
  for (int i = 0; i < number_of_o_letters; i++)
  {
    // Keep concatenating (gluing) additional 'o' letter to our initially empty string
    o_letters += 'o';
  }

  // Show result in one line by displaying 'W', then our string with concatenated 'o' letters and then last 'w' and end with new line '\n'
  std::cout << "W" << o_letters << "w\n";

  // We return '0' (meaning "success" code) to close the program
  return 0;
}

