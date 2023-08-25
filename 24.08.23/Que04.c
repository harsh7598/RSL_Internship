#include <stdio.h>
#include <stdlib.h>

int main() {
    // Create an array of integers with a size of 5
    int numbers[5];

    // Populate the array with values
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // Display the values using a loop and printf()
    printf("Array values:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }

    return 0;
}
