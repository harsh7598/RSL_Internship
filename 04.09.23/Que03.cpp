#include <iostream>

// Define a structure for the linked list node
struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head; // Pointer to the head of the linked list

public:
    // Constructor to initialize the head pointer
    LinkedList() : head(nullptr) {}

    // Function to prepend a new node with a given value to the beginning of the linked list
    void prepend(int value) {
        // Create a new node with the given value
        Node* newNode = new Node(value);

        // Set the next of the new node to point to the current head
        newNode->next = head;

        // Update the head pointer to point to the new node
        head = newNode;
    }

    // Function to print the linked list
    void printList() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    LinkedList myList;

    // Prepend some values to the linked list
    myList.prepend(3);
    myList.prepend(2);
    myList.prepend(1);

    // Print the linked list
    myList.printList();

    return 0;
}
