#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100]; // Declare an array to store characters

    // Read a string from the user
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Print the initialized string
    printf("The entered string is: %s\n", inputString);

    return 0;
}
