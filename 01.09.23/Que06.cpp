#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) {
        return false; // 1 and below are not prime
    }
    
    if (n == 2) {
        return true; // 2 is prime
    }

    if (n % 2 == 0) {
        return false; // Even numbers greater than 2 are not prime
    }

    // Check for factors up to the square root of n
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false; // n is divisible by i, so it's not prime
        }
    }

    return true; // If no factors were found, n is prime
}

int main() {
    int n;

    // Input a positive integer from the user
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (isPrime(n)) {
        std::cout << n << " is a prime number." << std::endl;
    } else {
        std::cout << n << " is not a prime number." << std::endl;
    }

    return 0;
}
