#include <iostream>
#include <cmath>

int main() {
    double number;

    std::cout << "Enter a positive number: ";
    std::cin >> number;


    if (number >= 0) {
        double squareRoot = sqrt(number);
        std::cout << "The square root of " << number << " is: " << squareRoot << std::endl;
    } else {
        std::cout << "Invalid input. Please enter a positive number." << std::endl;
    }

    return 0;
}
