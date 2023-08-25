#include <stdio.h>

int main() {
    int number;

    // Read a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Perform various arithmetic operations using shorthand operators
    number += 5;    // Equivalent to: number = number + 5
    printf("After adding 5: %d\n", number);

    number -= 2;    // Equivalent to: number = number - 2
    printf("After subtracting 2: %d\n", number);

    number *= 3;    // Equivalent to: number = number * 3
    printf("After multiplying by 3: %d\n", number);

    number /= 2;    // Equivalent to: number = number / 2
    printf("After dividing by 2: %d\n", number);

    number %= 4;    // Equivalent to: number = number % 4
    printf("After taking modulo 4: %d\n", number);

    return 0;
}
