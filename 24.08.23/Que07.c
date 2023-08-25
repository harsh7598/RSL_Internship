#include <stdio.h>

int main() {
    double number;

    // Taking user input
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Checking if the number is positive, negative, or zero
    if (number > 0) {
        printf("%.2lf is a positive number.\n", number);
    } else if (number < 0) {
        printf("%.2lf is a negative number.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
