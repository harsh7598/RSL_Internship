#include <stdio.h>

int main() {
    int n;
    
    // Get the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Declare an array of integers
    int arr[n];
    
    // Input the array elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Calculate the sum and product
    int sum = 0;
    long long product = 1;
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        product *= arr[i];
    }
    
    // Print the sum and product
    printf("Sum: %d\n", sum);
    printf("Product: %lld\n", product);
    
    return 0;
}
