#include <stdio.h>

int main() {
    int number;
    long long factorial = 1;  // Use long long to handle larger factorial values

    // Read the number for which to calculate the factorial
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the factorial using a for loop
    for (int i = 1; i <= number; i++) {
        factorial *= i;  // Multiply factorial by i
    }

    // Print the calculated factorial
    printf("Factorial of %d is %lld\n", number, factorial);

    return 0;
}
