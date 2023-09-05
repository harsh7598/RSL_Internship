#include <iostream>

int main() {
    int n;

    // Input the number of elements in the array
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Please enter a positive integer for the number of elements." << std::endl;
        return 1; // Exit with an error code
    }

    double arr[n];
    double sum = 0.0;

    // Input the elements into the array
    std::cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
        sum += arr[i];
    }

    double average = sum / n;

    std::cout << "The average of the numbers is: " << average << std::endl;

    return 0;
}
