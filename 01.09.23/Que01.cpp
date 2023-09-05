#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    // Input
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    
    cout << "Enter second number: ";
    cin >> num2;

    // Perform arithmetic operation
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1; // Exit program with an error code
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            return 1; // Exit program with an error code
    }

    // Output the result
    cout << "Result: " << num1 << " " << op << " " << num2 << " = " << result << endl;

    return 0;
}
