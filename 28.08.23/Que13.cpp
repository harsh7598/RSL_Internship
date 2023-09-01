#include <iostream>

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int i = 1;

    // Print the multiplication table using a while loop
    std::cout << "Multiplication table for " << number << ":\n";
    while (i <= 10) {
        std::cout << number << " x " << i << " = " << number * i << std::endl;
        i++;
    }

    return 0;
}
