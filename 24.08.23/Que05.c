#include <stdio.h>
#include <stdlib.h>

int main() {
    char userInput[100]; // Declare a char array to store user input

    // Prompt the user to enter a string
    printf("Enter a string: ");

    // Read the user input string using scanf
    scanf("%s", userInput);

    // Display the user input using printf
    printf("You entered: %s\n", userInput);

    return 0;
}
