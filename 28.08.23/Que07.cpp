#include <iostream>
#include <cctype>

int main() {
    char character;

    std::cout << "Enter a character: ";
    std::cin >> character;

    character = std::tolower(character);

    if (std::isalpha(character)) {
        if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
            std::cout << character << " is a vowel." << std::endl;
        } else {
            std::cout << character << " is a consonant." << std::endl;
        }
    } else {
        std::cout << "Invalid input. Please enter a valid character." << std::endl;
    }

    return 0;
}
