#include <stdio.h>

int main() {
    // Step 1: Declare an array of integers and initialize it with 5 values
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Step 2: Declare a pointer and point it to the array
    int *ptr = arr;

    // Step 3: Traverse the array using the pointer and print each element
    printf("Original array values:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i)); // Pointer arithmetic to access each element
    }

    // Step 4: Modify the values of the array using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        *(ptr + i) += 5; // Increment each element by 5
    }

    // Step 5: Print the modified array using both the pointer and the array name
    printf("\nModified array values (using pointer):\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i)); // Accessing using pointer
    }

    printf("\nModified array values (using array name):\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, arr[i]); // Accessing using array name
    }

    return 0;
}

