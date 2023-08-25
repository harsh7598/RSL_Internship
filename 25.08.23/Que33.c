#include <stdio.h>
#include <string.h>

int main() {
    char firstString[100]; // Declare an array to store the first string
    char secondString[100]; // Declare an array to store the second string

    // Read the first string from the user
    printf("Enter the first string: ");
    fgets(firstString, sizeof(firstString), stdin);

    // Read the second string from the user
    printf("Enter the second string: ");
    fgets(secondString, sizeof(secondString), stdin);

    // Remove newline character from the first string
    firstString[strcspn(firstString, "\n")] = '\0';

    // Concatenate the two strings
    strcat(firstString, secondString);

    // Print the concatenated string
    printf("Concatenated string: %s\n", firstString);

    return 0;
}
