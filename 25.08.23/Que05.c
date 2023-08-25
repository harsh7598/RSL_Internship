#include <stdio.h>

// Function to calculate the volume of a box
float calculateVolume(float length, float width, float height) {
    return length * width * height;
}

int main() {
    float length, width, height, volume;

    // Read the dimensions from the user
    printf("Enter the length of the box: ");
    scanf("%f", &length);

    printf("Enter the width of the box: ");
    scanf("%f", &width);

    printf("Enter the height of the box: ");
    scanf("%f", &height);

    // Calculate the volume using the function
    volume = calculateVolume(length, width, height);

    // Print the result
    printf("The volume of the box is: %.2f\n", volume);

    return 0;
}
