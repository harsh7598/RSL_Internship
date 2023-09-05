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

    // Function to insert a node at a specified position
    void insertNodeAtPosition(int position, int value) {
        if (position < 0) {
            // Invalid position
            return;
        }

        Node* newNode = new Node(value);
        if (position == 0) {
            // Special case: insert at the beginning
            newNode->next = head;
            head = newNode;
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

        if (currentPosition == position) {
            // Insert the new node at the specified position
            previous->next = newNode;
            newNode->next = current;
        } else {
            // Position is out of bounds, so add the new node at the end
            append(value);
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

    int positionToInsert = 2;
    int valueToInsert = 5;
    myList.insertNodeAtPosition(positionToInsert, valueToInsert);

    std::cout << "Linked List after inserting " << valueToInsert << " at position " << positionToInsert << ": ";
    myList.display();

    return 0;
}
