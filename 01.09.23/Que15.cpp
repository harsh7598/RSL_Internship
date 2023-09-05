#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;

public:
    // Constructor to initialize name and age
    Student(std::string n, int a) {
        name = n;
        age = a;
    }

    // Method to display student information
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

int main() {
    // Create two Student objects
    Student student1("Alice", 20);
    Student student2("Bob", 22);

    // Display information for each student
    std::cout << "Student 1 Information:" << std::endl;
    student1.displayInfo();
    std::cout << std::endl;

    std::cout << "Student 2 Information:" << std::endl;
    student2.displayInfo();

    return 0;
}
