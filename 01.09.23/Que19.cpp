#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> studentNames;

    while (true) {
        std::cout << "Student List:" << std::endl;
        for (size_t i = 0; i < studentNames.size(); ++i) {
            std::cout << i + 1 << ". " << studentNames[i] << std::endl;
        }

        std::cout << "\nOptions:\n";
        std::cout << "1. Add a student name\n";
        std::cout << "2. Remove a student name\n";
        std::cout << "3. Quit\n";
        std::cout << "Select an option: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::string newName;
            std::cout << "Enter the student name to add: ";
            std::cin.ignore(); // Clear the newline character from the previous input
            std::getline(std::cin, newName);
            studentNames.push_back(newName);
            std::cout << "Student name added.\n";
        } else if (choice == 2) {
            if (studentNames.empty()) {
                std::cout << "The student list is empty.\n";
            } else {
                std::cout << "Enter the number of the student to remove: ";
                int indexToRemove;
                std::cin >> indexToRemove;

                if (indexToRemove >= 1 && indexToRemove <= static_cast<int>(studentNames.size())) {
                    studentNames.erase(studentNames.begin() + indexToRemove - 1);
                    std::cout << "Student removed.\n";
                } else {
                    std::cout << "Invalid student number.\n";
                }
            }
        } else if (choice == 3) {
            break;
        } else {
            std::cout << "Invalid choice. Please select a valid option.\n";
        }
    }

    std::cout << "Program terminated.\n";

    return 0;
}
