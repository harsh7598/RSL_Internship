#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string inputString;

    // Input a string from the user
    std::cout << "Enter a string: ";
    std::cin >> inputString;

    // Use the std::reverse algorithm to reverse the string
    std::reverse(inputString.begin(), inputString.end());

    std::cout << "Reversed string: " << inputString << std::endl;

    return 0;
}
