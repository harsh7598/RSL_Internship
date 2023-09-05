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

    int sum = 0;

    // Calculate the sum of the numbers
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    // Calculate the average of the numbers
    double average = static_cast<double>(sum) / n;

    // Display the sum and average
    std::cout << "Sum of the numbers: " << sum << std::endl;
    std::cout << "Average of the numbers: " << average << std::endl;

    return 0;
}
