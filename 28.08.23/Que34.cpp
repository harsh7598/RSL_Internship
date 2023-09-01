#include <iostream>

int main() {
    int integers[5] = {10, 20, 30, 40, 50}; // Declare an array of integers

    
    int* ptr = integers;
    ptr++; // This will point to the second element in the array

    // Print the value using the incremented pointer
    std::cout << "Value of the second element: " << *ptr << std::endl;

    return 0;
}
