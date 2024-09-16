#include <stdio.h>

int main() {
    // Step 1: Declare an integer variable and initialize it with a value
    int num = 100;

    // Step 2: Declare a pointer to the integer
    int *ptr = &num;

    // Step 3: Declare a pointer to the pointer and initialize it
    int **doublePtr = &ptr;

    // Step 4: Print the value of the integer using both the pointer and the double-pointer
    printf("Value of num (using pointer): %d\n", *ptr);
    printf("Value of num (using double pointer): %d\n", **doublePtr);

    return 0;
}

