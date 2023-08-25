#include <stdio.h>

int main() {
    char ch;

    // Read a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is a lowercase letter and convert to uppercase
    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 'a' + 'A';  // Convert to uppercase
        printf("The converted character is: %c\n", ch);
    } else {
        printf("The entered character is not a lowercase letter.\n");
    }

    return 0;
}
