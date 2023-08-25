#include <stdio.h>
#include <stdlib.h>

int main() {
    const int constVal = 10; // Declaration of a constant
    int variableVal = 20;      // Declaration of a variable

    printf("Constant Value: %d\n", constVal);
    printf("Variable Value: %d\n", variableVal);

    printf("Address of Constant: %p\n", &constVal);
    printf("Address of Variable: %p\n", &variableVal);

    return 0;
}


//  Question - explain the difference between a constant and a variable.
//  = The difference between a constant and a variable is that a constant's value cannot be changed after its initialization, whereas a variable's value can be modified throughout the program's execution. Additionally, constants are often used to represent fixed values that shouldn't be altered, while variables hold data that can change during the program's execution.