#include <stdio.h>

int main() {
    int arraySize = 5; // You can adjust the size of the array
    int numbers[arraySize]; // Declare an array to store integers
    int sum = 0; // Initialize sum to zero

    // Populate the array with values
    for (int i = 0; i < arraySize; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate the sum of array elements
    for (int i = 0; i < arraySize; i++) {
        sum += numbers[i];
    }

    // Print the sum of array elements
    printf("The sum of array elements is: %d\n", sum);

    return 0;
}
