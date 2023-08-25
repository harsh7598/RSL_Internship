#include <stdio.h>

int main() {
    int integerNumber;
    float floatNumber;

    // Read an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &integerNumber);

    // Read a floating-point number from the user
    printf("Enter a floating-point number: ");
    scanf("%f", &floatNumber);

    // Print the values
    printf("You entered the integer: %d\n", integerNumber);
    printf("You entered the floating-point number: %f\n", floatNumber);

    return 0;
}
