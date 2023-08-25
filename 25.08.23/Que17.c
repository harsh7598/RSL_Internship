#include <stdio.h>

int main() {
    int numbers[5]; // Declare an array to store 5 integers

    // Read 5 integers from the user and store them in the array
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Print the integers stored in the array
    printf("The entered integers are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
