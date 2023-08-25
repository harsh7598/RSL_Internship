#include <stdio.h>

int main() {
    int num1, num2, larger;

    // Read two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Use conditional operator to determine the larger number
    larger = (num1 > num2) ? num1 : num2;

    // Print the larger number
    printf("The larger number is: %d\n", larger);

    return 0;
}
