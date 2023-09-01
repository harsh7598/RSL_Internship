#include <iostream>
#include <string>

class Person {
public:
    // Constructor
    Person(const std::string& name, int age) {
        setName(name);
        setAge(age);
    }

    // Getter for name
    std::string getName() const {
        return name;
    }

    // Setter for name
    void setName(const std::string& newName) {
        name = newName;
    }

    // Getter for age
    int getAge() const {
        return age;
    }

    // Setter for age
    void setAge(int newAge) {
        if (newAge >= 0) {
            age = newAge;
        } else {
            std::cerr << "Age cannot be negative. Setting age to 0." << std::endl;
            age = 0;
        }
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
    // Instantiate a Person object
    Person person("John Doe", 30);

    // Display the person's information
    std::cout << "Person's Information:" << std::endl;
    person.displayInfo();

    // Modify the person's information using setter methods
    person.setName("Jane Smith");
    person.setAge(25);

    // Display the updated information
    std::cout << "\nUpdated Person's Information:" << std::endl;
    person.displayInfo();

    return 0;
}
