#include <iostream>

int main() {
    int integerVariable = 42;

    int* pointerToInteger;

    // Assign the address of the integerVariable to the pointer
    pointerToInteger = &integerVariable;

    // Print the value and address of the integer variable using the pointer
    std::cout << "Value of integerVariable: " << *pointerToInteger << std::endl;
    std::cout << "Address of integerVariable: " << pointerToInteger << std::endl;

    return 0;
}
