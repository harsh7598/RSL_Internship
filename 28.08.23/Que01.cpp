#include <iostream>

int main() {
    double length, width, area;

    // Prompt the user for the length of the rectangle
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    // Prompt the user for the width of the rectangle
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // Calculate the area of the rectangle
    area = length * width;

    // Display the result
    std::cout << "The area of the rectangle is: " << area << std::endl;

    return 0;
}
