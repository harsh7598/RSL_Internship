#include <iostream>

int main() {
    int arr[100][100];

    // Calculate the number of rows and columns in the 2D array
    int numRows = sizeof(arr) / sizeof(arr[0]);
    int numCols = sizeof(arr[0]) / sizeof(arr[0][0]);

    std::cout << "The number of rows in the 2D array is: " << numRows << std::endl;
    std::cout << "The number of columns in the 2D array is: " << numCols << std::endl;

    return 0;
}
