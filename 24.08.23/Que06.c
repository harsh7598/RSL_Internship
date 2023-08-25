#include <stdio.h>

int main() {
    double num1, num2;

    // Taking user input
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Perform arithmetic operations and display the results
    printf("Sum: %.2lf\n", num1 + num2);
    printf("Difference: %.2lf\n", num1 - num2);
    printf("Product: %.2lf\n", num1 * num2);

    // Check for division by zero
    if (num2 != 0) {
        printf("Quotient: %.2lf\n", num1 / num2);
    } else {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}
