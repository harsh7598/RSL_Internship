#include <iostream>

int main() {
    double number, sum = 0.0;

    std::cout << "Enter numbers (enter a negative number to finish):\n";

    while (true) {
        std::cout << "Enter a number: ";
        std::cin >> number;

        if (number < 0.0) {
            break; 
        }

        sum += number;
    }

    std::cout << "The sum of the entered positive numbers is: " << sum << std::endl;

    return 0;
}
