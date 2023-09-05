#include <iostream>

// Define the maximum size of the stack
const int MAX_SIZE = 100;

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1; // Initialize top to -1 to indicate an empty stack
    }

    // Function to push an element onto the stack
    void push(int value) {
        if (top == MAX_SIZE - 1) {
            std::cout << "Stack overflow! Cannot push more elements." << std::endl;
            return;
        }
        arr[++top] = value;
        std::cout << "Pushed " << value << " onto the stack." << std::endl;
    }

    // Function to pop an element from the stack
    void pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty! Cannot pop." << std::endl;
            return;
        }
        int poppedValue = arr[top--];
        std::cout << "Popped " << poppedValue << " from the stack." << std::endl;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Function to display the elements of the stack
    void display() {
        if (isEmpty()) {
            std::cout << "Stack is empty." << std::endl;
            return;
        }
        std::cout << "Stack elements: ";
        for (int i = 0; i <= top; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Stack stack;
    int choice, value;

    while (true) {
        std::cout << "Stack Operations Menu:" << std::endl;
        std::cout << "1. Push" << std::endl;
        std::cout << "2. Pop" << std::endl;
        std::cout << "3. Display" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter the value to push: ";
                std::cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.display();
                break;
            case 4:
                std::cout << "Exiting the program." << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
