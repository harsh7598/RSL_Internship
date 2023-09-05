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

    int arr[n];

    // Input the elements into the array
    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Initialize variables for maximum and minimum
    int max = arr[0];
    int min = arr[0];

    // Find maximum and minimum values
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    std::cout << "Maximum value: " << max << std::endl;
    std::cout << "Minimum value: " << min << std::endl;

    return 0;
}
