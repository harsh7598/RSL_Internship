#include <stdio.h>

int main() {
    int number;

    // Read an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("The entered number is positive.\n");
    } else if (number < 0) {
        printf("The entered number is negative.\n");
    } else {
        printf("The entered number is zero.\n");
    }

    return 0;
}
