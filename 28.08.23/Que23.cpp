#include <iostream>

double calculateSquare(double number) {
    return number * number;
}

int main() {
    double num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    double square = calculateSquare(num);

    std::cout << "The square of " << num << " is: " << square << std::endl;

    return 0;
}
