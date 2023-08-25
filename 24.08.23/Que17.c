#include <stdio.h>

int main() {
    const int months = 12; // Number of months in a year
    
    // Declare a 2D array to store monthly rainfall data
    double rainfall[months][2]; // Column 0: Total rainfall, Column 1: Number of days
    
    // Input monthly rainfall data
    for (int i = 0; i < months; i++) {
        printf("Enter total rainfall for month %d (in millimeters): ", i + 1);
        scanf("%lf", &rainfall[i][0]);
        
        printf("Enter number of days in month %d: ", i + 1);
        scanf("%lf", &rainfall[i][1]);
    }
    
    printf("\nMonthly Average Rainfall:\n");
    
    // Calculate and print the average rainfall for each month
    for (int i = 0; i < months; i++) {
        double averageRainfall = rainfall[i][0] / rainfall[i][1];
        printf("Month %d: %.2lf mm\n", i + 1, averageRainfall);
    }
    
    return 0;
}
