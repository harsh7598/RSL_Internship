#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100]; // Declare an array to store the sentence

    // Read a sentence from the user
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Replace spaces with underscores
    int length = strlen(sentence);
    for (int i = 0; i < length; i++) {
        if (sentence[i] == ' ') {
            sentence[i] = '_';
        }
    }

    // Print the modified sentence
    printf("Modified sentence: %s\n", sentence);

    return 0;
}
