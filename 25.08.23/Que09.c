#include <stdio.h>

int main() {
    int number;

    // Read an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd using the modulo operator
    if (number % 2 == 0) {
        printf("The entered number is even.\n");
    } else {
        printf("The entered number is odd.\n");
    }

    return 0;
}
