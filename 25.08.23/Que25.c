#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Read a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is a special symbol
    if (!isalnum(ch)) {
        printf("The entered character is a special symbol.\n");
    } else {
        printf("The entered character is not a special symbol.\n");
    }

    return 0;
}
