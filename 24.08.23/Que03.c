#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;

    // Taking user input
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Calculating and displaying the sum
    int sum = num1 + num2;
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
