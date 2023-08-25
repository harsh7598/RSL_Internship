#include <stdio.h>

int main() {
    char char1, char2;

    // Read two characters from the user
    printf("Enter the first character: ");
    scanf(" %c", &char1);

    printf("Enter the second character: ");
    scanf(" %c", &char2);

    // Compare and print the result
    if (char1 == char2) {
        printf("The characters are equal.\n");
    } else {
        printf("The characters are not equal.\n");
    }

    return 0;
}
