#include <stdio.h>

int main() {
    int number = 2;  // Start with the first even number

    // Use a while loop to print even numbers between 2 and 20
    while (number <= 20) {
        printf("%d\n", number);
        number += 2;  // Increment by 2 to get the next even number
    }

    return 0;
}
