#include <stdio.h>

int main() {
    int arraySize = 5; // You can adjust the size of the array
    int numbers[arraySize]; // Declare an array to store integers

    // Populate the array with values
    for (int i = 0; i < arraySize; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Print the odd numbers in the array
    printf("Odd numbers in the array are: ");
    for (int i = 0; i < arraySize; i++) {
        if (numbers[i] % 2 != 0) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    return 0;
}
