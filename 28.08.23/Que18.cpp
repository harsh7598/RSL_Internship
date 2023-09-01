#include <iostream>

int main() {
    int rows, cols;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;


    int arr[100][100]; 

   
    std::cout << "Enter the elements of the 2D array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter element at position (" << i << ", " << j << "): ";
            std::cin >> arr[i][j];
        }
    }

    // Calculate the sum of elements in the array
    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum += arr[i][j];
        }
    }

    // Display the sum
    std::cout << "The sum of elements in the 2D array is: " << sum << std::endl;

    return 0;
}
