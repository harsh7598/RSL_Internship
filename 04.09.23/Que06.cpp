#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    // Function to add a node at the end of the linked list
    void append(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next) {
            current = current->next;
        }

        current->next = newNode;
    }

    // Function to remove the last node from the linked list
    void removeLastNode() {
        if (!head) {
            // List is empty, nothing to remove
            return;
        }

        if (!head->next) {
            // Only one node in the list, so remove it
            delete head;
            head = nullptr;
            return;
        }

        Node* current = head;
        Node* previous = nullptr;
        while (current->next) {
            previous = current;
            current = current->next;
        }

        delete current; // Delete the last node
        previous->next = nullptr; // Update the previous node's next pointer
    }

    // Function to display the linked list
    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList myList;
    
    myList.append(1);
    myList.append(2);
    myList.append(3);
    myList.append(4);

    std::cout << "Original Linked List: ";
    myList.display();

    myList.removeLastNode();

    std::cout << "Linked List after removing the last node: ";
    myList.display();

    return 0;
}
