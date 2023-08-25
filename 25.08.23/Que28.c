#include <stdio.h>
#include <string.h>

int main() {
    char word[100]; // Declare an array to store characters

    // Read a word from the user
    printf("Enter a word: ");
    scanf("%s", word);

    int length = strlen(word);

    // Print characters in reverse order
    printf("Characters in reverse order:\n");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c ", word[i]);
    }
    printf("\n");

    return 0;
}
