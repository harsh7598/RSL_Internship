#include <stdio.h>

int main() {
    int numCount;
    double num, sum = 0.0;

    // Taking user input for the number of values
    printf("Enter the number of values: ");
    scanf("%d", &numCount);

    // Taking user input for the numbers and calculating their sum
    for (int i = 1; i <= numCount; i++) {
        printf("Enter value %d: ", i);
        scanf("%lf", &num);
        sum += num;
    }
    // Displaying the sum
    printf("Sum of the entered values: %.2lf\n", sum);

    return 0;
}
