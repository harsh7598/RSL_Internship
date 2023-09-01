#include <iostream>
#include <string>

class Book {
public:
    
    Book(const std::string& title, const std::string& author, int publicationYear)
        : title(title), author(author), publicationYear(publicationYear) {
    }

    void displayInfo() const {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Publication Year: " << publicationYear << std::endl;
    }

private:
    std::string title;
    std::string author;
    int publicationYear;
};

int main() {
    // Create a Book object using constructor initialization lists
    Book book("The Catcher in the Rye", "J.D. Salinger", 1951);

    // Display book information
    std::cout << "Book Information:" << std::endl;
    book.displayInfo();

    return 0;
}
