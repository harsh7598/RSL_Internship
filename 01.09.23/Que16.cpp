#include <iostream>
#include <string>

// Base class: Vehicle
class Vehicle {
protected:
    std::string make;
    int year;

public:
    // Constructor for Vehicle
    Vehicle(std::string m, int y) : make(m), year(y) {}

    // Method to display vehicle information
    void displayInfo() {
        std::cout << "Make: " << make << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
};

// Derived class: Car
class Car : public Vehicle {
private:
    std::string model;

public:
    // Constructor for Car
    Car(std::string m, int y, std::string mdl) : Vehicle(m, y), model(mdl) {}

    // Method to display car information
    void displayCarInfo() {
        displayInfo(); // Call the base class method to display common info
        std::cout << "Model: " << model << std::endl;
    }
};

int main() {
    // Create an instance of Vehicle
    Vehicle vehicle("Ford", 2022);

    // Create an instance of Car
    Car car("Toyota", 2023, "Camry");

    // Display information for the vehicle
    std::cout << "Vehicle Information:" << std::endl;
    vehicle.displayInfo();
    std::cout << std::endl;

    // Display information for the car
    std::cout << "Car Information:" << std::endl;
    car.displayCarInfo();

    return 0;
}
