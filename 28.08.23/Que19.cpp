#include <iostream>

int main() {
    int arr[100];

 
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "The size of the integer array is: " << size << std::endl;

    return 0;
}
