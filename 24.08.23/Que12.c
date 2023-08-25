#include <stdio.h>

int main() {
    int number;

    // Input
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Divisors of %d are: ", number);

    // Calculate and print divisors
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
