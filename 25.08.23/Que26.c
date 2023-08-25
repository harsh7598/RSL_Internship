#include <stdio.h>
#include <string.h>

int main() {
    char word[100]; // Declare an array to store characters

    // Read a word from the user
    printf("Enter a word: ");
    scanf("%s", word);

    // Print each character separately
    printf("Individual characters of the word:\n");
    for (int i = 0; i < strlen(word); i++) {
        printf("%c\n", word[i]);
    }

    return 0;
}
