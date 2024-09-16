#include <stdio.h>

int main() {
    // Step 1: Declare an integer variable and initialize it with a value
    int num = 10;

    // Step 2: Declare a pointer variable that points to the integer
    int *ptr = &num;

    // Step 3: Print the address of the integer using both the variable and the pointer
    printf("Address of num (using variable): %p\n", (void*)&num);
    printf("Address of num (using pointer): %p\n", (void*)ptr);

    // Step 4: Modify the value of the integer using the pointer
    *ptr = 20;

    // Print the new value of the integer
    printf("New value of num (after modification using pointer): %d\n", num);

    return 0;

}
