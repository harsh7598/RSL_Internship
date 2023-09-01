#include <iostream>

int main() {
    int num = 10;

    std::cout << "Original value of num: " << num << std::endl;

    int& numRef = num;

    numRef = 20;

    std::cout << "Modified value of num through reference: " << num << std::endl;

    return 0;
}
