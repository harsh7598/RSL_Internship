#include <iostream>
#include <bitset>

int main() {
    int decimalNumber;

    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    std::bitset<32> binaryRepresentation(decimalNumber);

    std::cout << "Binary representation: " << binaryRepresentation << std::endl;

    return 0;
}
