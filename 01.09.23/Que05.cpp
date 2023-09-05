#include <iostream>

int main() {
    int n;
    int sum = 0;

    // Input a positive integer from the user
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n < 1) {
        std::cout << "Please enter a positive integer greater than or equal to 1." << std::endl;
    } else {
        for (int i = 2; i <= n; i += 2) {
            sum += i;
        }

        std::cout << "The sum of even numbers from 1 to " << n << " is: " << sum << std::endl;
    }

    return 0;
}
