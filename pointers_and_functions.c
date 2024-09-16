#include <stdio.h>

// Step 1: Write a function swap() that swaps two integer values using pointers
void swap(int *a, int *b) {
    int temp = *a; // Store the value of a in a temporary variable
    *a = *b;       // Assign the value of b to a
    *b = temp;     // Assign the value of temp (original a) to b
}

int main() {
    // Step 2: Declare two integers and initialize them with values
    int num1 = 10, num2 = 20;

    // Print values before the swap
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    // Step 2: Call the swap() function and pass the addresses of num1 and num2
    swap(&num1, &num2);

    // Step 3: Print the values after the swap
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

