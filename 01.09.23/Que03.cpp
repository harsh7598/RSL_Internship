#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    // Input coefficients from the user
    std::cout << "Enter coefficient a: ";
    std::cin >> a;

    std::cout << "Enter coefficient b: ";
    std::cin >> b;

    std::cout << "Enter coefficient c: ";
    std::cin >> c;

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the discriminant to determine the nature of roots
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + std::sqrt(discriminant)) / (2 * a);
        root2 = (-b - std::sqrt(discriminant)) / (2 * a);
        std::cout << "Root 1 = " << root1 << std::endl;
        std::cout << "Root 2 = " << root2 << std::endl;
    } else if (discriminant == 0) {
        // One real root (double root)
        root1 = -b / (2 * a);
        std::cout << "Root 1 = Root 2 = " << root1 << std::endl;
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = std::sqrt(-discriminant) / (2 * a);
        std::cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << std::endl;
        std::cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }

    return 0;
}
