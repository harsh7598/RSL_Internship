#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string name;
    int age;


    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::stringstream ss;
    ss << "Hello, my name is " << name << " and I am " << age << " years old.";

   
    std::string sentence = ss.str();

    std::cout << sentence << std::endl;

    return 0;
}
