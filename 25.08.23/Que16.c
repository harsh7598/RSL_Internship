#include <stdio.h>

int main() {
    float radius, area;
    const float pi = 3.14159;
    // Read the radius of the circle from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area of the circle
    area = pi * radius * radius;

    // Print the calculated area
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
