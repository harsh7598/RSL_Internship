#include <iostream>

// Define a structure for each node in the doubly linked list
struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Function to insert a node at the beginning of the doubly linked list
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // Function to display the doubly linked list forward
    void displayForward() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Function to remove the first node from the doubly linked list
    void removeFirstNode() {
        if (!head) {
            // List is empty, nothing to remove
            return;
        }

        Node* current = head;

        if (current->next) {
            // Update the next node's prev pointer
            current->next->prev = nullptr;
        }

        head = current->next; // Update the head pointer

        delete current; // Delete the old head node
    }

    // Destructor to release memory allocated for nodes
    ~DoublyLinkedList() {
        Node* current = head;
        while (current) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
};

int main() {
    DoublyLinkedList myList;

    myList.insertAtBeginning(1);
    myList.insertAtBeginning(2);
    myList.insertAtBeginning(3);

    std::cout << "Doubly Linked List Forward: ";
    myList.displayForward();

    myList.removeFirstNode();

    std::cout << "Doubly Linked List After Removing the First Node: ";
    myList.displayForward();

    return 0;
}
