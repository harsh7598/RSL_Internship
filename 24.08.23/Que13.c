#include <stdio.h>
#include <limits.h>

int main() {
    int numCount;

    // Input
    printf("Enter the number of values: ");
    scanf("%d", &numCount);

    if (numCount <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    int num, minValue = INT_MAX, maxValue = INT_MIN;

    // Input and calculation
    for (int i = 0; i < numCount; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &num);

        if (num < minValue) {
            minValue = num;
        }

        if (num > maxValue) {
            maxValue = num;
        }
    }

    printf("Minimum value: %d\n", minValue);
    printf("Maximum value: %d\n", maxValue);

    return 0;
}
