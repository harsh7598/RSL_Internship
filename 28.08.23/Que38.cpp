#include <iostream>
#include <cstring>

int main() {
    const int maxLength = 100; // Maximum length of the input string

    char inputString[maxLength];
    char reversedString[maxLength];
    
    std::cout << "Enter a string: ";
    std::cin.getline(inputString, maxLength);

    int length = strlen(inputString);

    // Pointer to the end of the input string
    char* endPtr = inputString + length - 1;

    // Pointer to the beginning of the reversed string
    char* reversedPtr = reversedString;

    // Reverse the string using pointer arithmetic
    while (endPtr >= inputString) {
        *reversedPtr = *endPtr;
        reversedPtr++;
        endPtr--;
    }

    *reversedPtr = '\0'; // Null-terminate the reversed string

    // Display the reversed string
    std::cout << "Reversed string: " << reversedString << std::endl;

    return 0;
}
