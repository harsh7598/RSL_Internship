#include <stdio.h>
#include <string.h>

int main() {
    char source[100]; // Declare an array to store the source string
    char destination[100]; // Declare an array to store the destination string

    // Read the source string from the user
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);

    // Copy the source string to the destination string
    strcpy(destination, source);

    // Print the copied string
    printf("Copied string: %s", destination);

    return 0;
}
