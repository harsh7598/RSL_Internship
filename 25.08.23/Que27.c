#include <stdio.h>
#include <string.h>

int main() {
    char word[100]; // Declare an array to store characters

    // Read a word from the user
    printf("Enter a word: ");
    scanf("%s", word);

    // Print each character using a loop
    printf("Characters in the array:\n");
    int length = strlen(word);
    for (int i = 0; i < length; i++) {
        printf("%c ", word[i]);
    }
    printf("\n");

    return 0;
}
