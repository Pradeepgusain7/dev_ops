#include <stdio.h>

int main() {
    // Define an array of 10 integers
    int numbers[5] = {1, 2, 3, 4, 5};

    // Print the elements of the array
    printf("Array of 10 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
