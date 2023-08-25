#include <stdio.h>

int main() {
    char line[100]; // Declare an array to store the line

    // Read a line of text from the user
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    // Print the entered line of text
    printf("Entered line of text: %s", line);

    return 0;
}
