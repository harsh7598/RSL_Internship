#include <iostream>

int main() {
    int numTerms;

    // Input the number of terms from the user
    std::cout << "Enter the number of Fibonacci terms to generate: ";
    std::cin >> numTerms;

    if (numTerms <= 0) {
        std::cout << "Please enter a positive integer greater than zero." << std::endl;
    } else {
        int first = 0, second = 1;

        std::cout << "Fibonacci Series up to " << numTerms << " terms: ";
        
        if (numTerms >= 1) {
            std::cout << first;
        }

        if (numTerms >= 2) {
            std::cout << ", " << second;
        }

        for (int i = 3; i <= numTerms; ++i) {
            int next = first + second;
            std::cout << ", " << next;
            first = second;
            second = next;
        }

        std::cout << std::endl;
    }

    return 0;
}
