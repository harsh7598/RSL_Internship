#include <stdio.h>
#include <string.h>

int main() {
    char a[1000]; // Source string
    char b[1000]; // Destination string
    
    // Input the source string
    printf("Enter the source string: ");
    fgets(a, sizeof(a), stdin);
    
    // Remove the newline character from the source string
    a[strcspn(a, "\n")] = '\0';
    
    // Copy the content of the source string to the destination string
    strcpy(b, a);
    
    // Print the copied string
    printf("Copied string: %s\n", b);
    
    return 0;
}
