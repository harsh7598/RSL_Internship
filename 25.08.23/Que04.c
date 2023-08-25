#include <stdio.h>

// Function to calculate the area of a rectangle
float calculateArea(float length, float width) {
    return length * width;
}

int main() {
    float length, width, area;

    // Read the length and width from the user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the area using the function
    area = calculateArea(length, width);

    // Print the result
    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}
