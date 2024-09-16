#include <stdio.h>
#include <stdlib.h>  // For atexit() and exit()

// Function 1: A function to be called when the program terminates
void cleanup1() {
    printf("Cleanup function 1 executed.\n");
}

// Function 2: Another function to be called when the program terminates
void cleanup2() {
    printf("Cleanup function 2 executed.\n");
}

int main() {
    // Register the functions with atexit()
    atexit(cleanup1);
    atexit(cleanup2);

    // Step 1: Test calling exit() at different locations
    printf("Program is running...\n");
    
    // Uncomment this line to test exit before program termination
    // exit(0);

    printf("Program is about to terminate normally.\n");

    return 0;
}

