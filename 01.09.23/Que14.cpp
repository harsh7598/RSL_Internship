#include <iostream>

// Function to add two integers and return their sum
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    // Input two integers from the user
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Call the 'add' function to calculate the sum
    int sum = add(num1, num2);

    // Display the result
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}
