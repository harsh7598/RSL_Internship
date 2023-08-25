#include <stdio.h>

int main() {
    int number;

    // Read the number for which to generate the multiplication table
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print the multiplication table using a for loop
    printf("Multiplication Table for %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
