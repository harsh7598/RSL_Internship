#include <iostream>

int main() {
    double score;

    std::cout << "Enter your numerical score: ";
    std::cin >> score;

    char grade;

    if (score >= 90.0) {
        grade = 'A';
    } else if (score >= 80.0) {
        grade = 'B';
    } else if (score >= 70.0) {
        grade = 'C';
    } else if (score >= 60.0) {
        grade = 'D';
    } else {
        grade = 'F';
    }


    std::cout << "Your grade is: " << grade << std::endl;

    return 0;
}
