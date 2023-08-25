#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Read a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Convert the character to lowercase for easier comparison
    char lowercaseCh = tolower(ch);

    // Check if the character is a vowel or a consonant
    if (lowercaseCh >= 'a' && lowercaseCh <= 'z') {
        if (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u') {
            printf("The entered character is a vowel.\n");
        } else {
            printf("The entered character is a consonant.\n");
        }
    } else {
        printf("The entered character is not a valid letter.\n");
    }

    return 0;
}
