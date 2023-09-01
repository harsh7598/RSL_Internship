#include <iostream>
#include <string>

class Book {
public:
    // Constructor
    Book(const std::string& title) : title(title) {
        std::cout << "Constructor called for book: " << title << std::endl;
    }

    // Destructor
    ~Book() {
        std::cout << "Destructor called for book: " << title << std::endl;
    }

private:
    std::string title;
};

int main() {
    // Instantiate a Book object
    Book book1("Introduction to Programming");

    // Create another Book object
    Book book2("Data Structures and Algorithms");

    return 0;
}
