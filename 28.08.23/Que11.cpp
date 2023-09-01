#include <iostream>
#include <cmath>

bool areEqual(double num1, double num2, double tolerance) {
    return std::abs(num1 - num2) <= tolerance;
}

int main() {
    double num1, num2, tolerance;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;


    std::cout << "Enter the tolerance level: ";
    std::cin >> tolerance;

    if (areEqual(num1, num2, tolerance)) {
        std::cout << "The numbers are equal within the tolerance." << std::endl;
    } else {
        std::cout << "The numbers are not equal within the tolerance." << std::endl;
    }

    return 0;
}
