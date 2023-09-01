#include <iostream>

class Rectangle {
public:
    Rectangle(double width, double height) {
        this->width = width;
        this->height = height;
    }
    double calculateArea() {
        // Use the this keyword to access data members
        return this->width * this->height;
    }

private:
    double width;
    double height;
};

int main() {
    Rectangle rectangle(5.0, 3.0);

    // Calculate and display the area
    double area = rectangle.calculateArea();
    std::cout << "The area of the rectangle is: " << area << std::endl;

    return 0;
}
