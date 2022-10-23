package main
import "fmt"

// All programs in go language must execute in the main function
func main() {
	// Read number of 'o' letters from console (input)
	var number_of_o_letters int
	fmt.Scan(&number_of_o_letters)

    // Create empty string (text) variable (data container)
    o_letters := ""

    // In loop, for number of times specified in input 
	for i := 0; i < number_of_o_letters; i++ {
		// Keep concatenating (gluing) additional 'o' letter to our initially empty string
		o_letters += "o"
	}

	// Show result in one line by displaying 'W', then our string with concatenated 'o' letters and then last 'w' and end with new line '\n'
	fmt.Printf("W%sw", o_letters)
}
