#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100]; // Declare an array to store the string

    // Read a string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Calculate the length of the string (excluding newline)
    int length = strlen(inputString) - 1;

    // Print the length of the string
    printf("Length of the string: %d\n", length);

    return 0;
}
