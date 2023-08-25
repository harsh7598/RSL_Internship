#include <stdio.h>
#include <stdlib.h>

// Function to calculate the square of a number
double calculateSquare(double number) {
    return number * number;
}

int main() {

    double number;
    // Calculate and print squares using the calculateSquare function
    printf("Enter the number to find out it's square : ");
    scanf("%lf", &number);
    printf("Square of %.2lf is %.2lf\n", number, calculateSquare(number));

    return 0;
}

// Below is a hard code method to find square root.

    // double num1 = 5.0;
    // double num2 = 7.0;
    // double num3 = 3.0;

    // printf("Square of %.2lf: %.2lf\n", num1, calculateSquare(num1));
    // printf("Square of %.2lf: %.2lf\n", num2, calculateSquare(num2));
    // printf("Square of %.2lf: %.2lf\n", num3, calculateSquare(num3));