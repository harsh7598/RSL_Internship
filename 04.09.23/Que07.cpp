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

    // Function to remove a node at a specified position
    void removeNodeAtPosition(int position) {
        if (!head) {
            // List is empty, nothing to remove
            return;
        }

        if (position == 0) {
            // Special case: remove the head node
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        Node* previous = nullptr;
        int currentPosition = 0;

        while (current && currentPosition != position) {
            previous = current;
            current = current->next;
            currentPosition++;
        }

        if (current) {
            // Remove the node at the specified position
            previous->next = current->next;
            delete current;
        }
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

    int positionToRemove = 2;
    myList.removeNodeAtPosition(positionToRemove);

    std::cout << "Linked List after removing node at position " << positionToRemove << ": ";
    myList.display();

    return 0;
}
