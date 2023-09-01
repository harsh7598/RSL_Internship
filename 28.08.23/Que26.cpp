#include <iostream>
#include <string>

class Person {
public:
    // Constructor to initialize name and age
    Person(const std::string& name, int age) {
        this->name = name;
        this->age = age;
    }

    // Function to display person's information
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }

private:
    std::string name;
    int age;
};

int main() {
    // Instantiate a Person object
    Person person("John Doe", 30);

    // Display the person's information
    std::cout << "Person's Information:" << std::endl;
    person.displayInfo();

    return 0;
}
