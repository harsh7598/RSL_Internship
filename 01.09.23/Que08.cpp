#include <iostream>
#include <string>
#include <cctype> // for tolower() function

bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        // Convert characters to lowercase for case-insensitive comparison
        char leftChar = std::tolower(str[left]);
        char rightChar = std::tolower(str[right]);

        // Skip non-alphanumeric characters
        if (!std::isalnum(leftChar)) {
            left++;
        } else if (!std::isalnum(rightChar)) {
            right--;
        } else if (leftChar != rightChar) {
            return false;
        } else {
            left++;
            right--;
        }
    }

    return true;
}

int main() {
    std::string input;

    // Input a string from the user
    std::cout << "Enter a string: ";
    std::cin >> input;

    if (isPalindrome(input)) {
        std::cout << "\"" << input << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << input << "\" is not a palindrome." << std::endl;
    }

    return 0;
}
