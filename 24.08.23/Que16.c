#include <stdio.h>

int main() {
    int rows, cols;
    
    // Get the number of rows and columns in the 2D array
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    // Declare a 2D array of integers
    int arr[rows][cols];
    
    // Input the array elements
    printf("Enter %d x %d elements:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int targetRow, targetCol;
    
    // Get the row and column for which the element is to be printed
    printf("Enter the row: ");
    scanf("%d", &targetRow);
    printf("Enter the column: ");
    scanf("%d", &targetCol);
    
    // Check if the given row and column are within valid range
    if (targetRow >= 0 && targetRow < rows && targetCol >= 0 && targetCol < cols) {
        // Print the element at the specified row and column
        printf("Element at row %d and column %d: %d\n", targetRow, targetCol, arr[targetRow][targetCol]);
    } else {
        printf("Invalid row or column index.\n");
    }
    
    return 0;
}
