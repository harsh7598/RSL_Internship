#include <iostream>

int main() {
    int integers[] = {10, 20, 30, 40, 50}; // Declare an array of integers

    int* ptr = integers;

    // Calculate the number of elements in the array
    int numElements = sizeof(integers) / sizeof(integers[0]);

    // Initialize a variable to store the sum
    int sum = 0;

    // Use a loop to iterate through the array and calculate the sum using pointer arithmetic
    for (int i = 0; i < numElements; i++) {
        sum += *ptr;

        ptr++;
    }

    std::cout << "Sum of elements in the array: " << sum << std::endl;

    return 0;
}
