#include <iostream>

double calculateSum(double num1, double num2) {
    return num1 + num2;
}

int main() {
    double num1, num2;


    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Call the function to calculate the sum
    double sum = calculateSum(num1, num2);

    // Display the result
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}
