#include <stdio.h>

int main() {
    float num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform arithmetic operations
    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;

    // Check if num2 is not zero before performing division
    float quotient;
    if (num2 != 0) {
        quotient = num1 / num2;
    } else {
        printf("Division by zero is not possible.\n");
        return 1; // Exit the program with an error code
    }

    // Display results
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}
