#include <stdio.h>

int main() {
    char sentence[1000]; // Assuming the sentence length won't exceed 1000 characters
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    printf("You entered: %s", sentence);
    
    return 0;
}
