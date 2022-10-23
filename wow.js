process.stdin.resume();
process.stdin.setEncoding("utf-8");

// Read number of 'o' letters from console (input)
process.stdin.on("data", (numberOfOLetters) => {
    // Create empty string (text) container
    let oLetters = "";
    // In loop, for number of times specified in input 
    for (let i=0; i<numberOfOLetters; i++) {
        // Keep concatenating (gluing) additional 'o' letter to our initially empty string
        oLetters += 'o';
    }
    // Show result in one line by displaying 'W', then our string with concatenated 'o' letters and then last 'w'
    console.log(`W${oLetters}w`)
    // Close the program, otherwise it will keep waiting for new console input
    process.exit()
});