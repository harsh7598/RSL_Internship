#include <stdio.h>

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Function to calculate LCM using GCD
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and print GCD
    int gcdResult = gcd(num1, num2);
    printf("GCD of %d and %d is: %d\n", num1, num2, gcdResult);

    // Calculate and print LCM
    int lcmResult = lcm(num1, num2);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcmResult);

    return 0;
}
