#include <stdio.h>

int main() {
    int myInt = 42;
    float myFloat = 3.14159;
    char myChar = 'X';
    char myString[] = "Hello, world!";
    
    printf("Integer: %d\n", myInt);
    printf("Float (default): %f\n", myFloat);
    printf("Float (2 decimal places): %.2f\n", myFloat);
    printf("Character: %c\n", myChar);
    printf("String: %s\n", myString);
    
    return 0;
}
