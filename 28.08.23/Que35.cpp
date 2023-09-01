#include <iostream>

int main() {
    int integers[] = {10, 20, 30, 40, 50}; // Declare an array of integers

    
    int* ptr = integers;

    // Calculate the number of elements in the array
    int numElements = sizeof(integers) / sizeof(integers[0]);

    // Use a loop to iterate through the array and display the values
    for (int i = 0; i < numElements; i++) {
        std::cout << "Value at index " << i << ": " << *ptr << std::endl;

        // Move the pointer to the next element
        ptr++;
    }

    return 0;
}
