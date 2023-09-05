#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;

    // Input Fahrenheit temperature
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // Output the result
    cout << "Temperature in Celsius: " << celsius << " degrees Celsius" << endl;

    return 0;
}
