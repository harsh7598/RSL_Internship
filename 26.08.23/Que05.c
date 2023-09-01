#include <stdio.h>

int main() {
    // Constants
    const int fixedValue1 = 10;
    const float fixedValue2 = 3.5;

    // Variables
    int num1 = 25;
    float num2 = 7.2;

    // Arithmetic operations
    int sum = num1 + fixedValue1;
    float product = num2 * fixedValue2;

    // Display results
    printf("Sum: %d\n", sum);
    printf("Product: %.2f\n", product);

    return 0;
}
