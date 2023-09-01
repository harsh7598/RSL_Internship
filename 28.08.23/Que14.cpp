#include <iostream>

int main() {
    double number, sum = 0.0;

    std::cout << "Enter numbers (enter 0 to finish):\n";

    while (true) {
        std::cout << "Enter a number: ";
        std::cin >> number;

        if (number == 0.0) {
            break; 
        }

        sum += number;
    }

    std::cout << "The sum of the entered numbers is: " << sum << std::endl;

    return 0;
}
