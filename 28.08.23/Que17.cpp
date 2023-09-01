#include <iostream>

int main() {
    int arr[100]; 
    int n;

    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    // Find the maximum and minimum values in the array
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Display the maximum and minimum values
    std::cout << "Maximum value: " << max << std::endl;
    std::cout << "Minimum value: " << min << std::endl;

    return 0;
}
