#include <stdio.h>
#include <stdlib.h>


// Function to calculate the power of a number
double calculatePower(double base, int exponent) {
    double result = 1.0;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    double base;
    int exponent;

    // Taking user input for base and exponent
    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate and print the power using the calculatePower function
    double power = calculatePower(base, exponent);
    printf("%.2lf raised to the power of %d is: %.2lf\n", base, exponent, power);

    return 0;
}
