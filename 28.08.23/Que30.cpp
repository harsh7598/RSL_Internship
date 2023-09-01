#include <iostream>
#include <string>

class Person {
public:
    // Default constructor
    Person() {
        name = "Unknown";
        age = 0;
    }

    // Constructor with name and age
    Person(const std::string& newName, int newAge) {
        name = newName;
        age = newAge;
    }

    // Constructor with name (age defaults to 0)
    Person(const std::string& newName) {
        name = newName;
        age = 0;
    }

    // Constructor with age (name defaults to "Unknown")
    Person(int newAge) {
        name = "Unknown";
        age = newAge;
    }

    // Getter for name
    std::string getName() const {
        return name;
    }

    // Getter for age
    int getAge() const {
        return age;
    }

    // Function to display person's information
    void displayInfo() const {
        std::cout << "Name: " << getName() << std::endl;
        std::cout << "Age: " << getAge() << std::endl;
    }

private:
    std::string name;
    int age;
};

int main() {
    // Create Person objects using different constructors
    Person person1;                          // Default constructor
    Person person2("John Doe", 30);          // Constructor with name and age
    Person person3("Jane Smith");            // Constructor with name (age defaults to 0)
    Person person4(25);                      // Constructor with age (name defaults to "Unknown")

    // Display information for each person
    std::cout << "Person 1 Information:" << std::endl;
    person1.displayInfo();

    std::cout << "\nPerson 2 Information:" << std::endl;
    person2.displayInfo();

    std::cout << "\nPerson 3 Information:" << std::endl;
    person3.displayInfo();

    std::cout << "\nPerson 4 Information:" << std::endl;
    person4.displayInfo();

    return 0;
}
