#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char inputString[100]; // Declare an array to store the input string

    // Read the input string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Convert the string to uppercase
    int length = strlen(inputString);
    for (int i = 0; i < length; i++) {
        inputString[i] = toupper(inputString[i]);
    }

    // Print the uppercase string
    printf("Uppercase string: %s", inputString);

    return 0;
}
