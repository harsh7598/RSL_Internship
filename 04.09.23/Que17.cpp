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

    // Function to remove the last node from the doubly linked list
    void removeLastNode() {
        if (!head) {
            // List is empty, nothing to remove
            return;
        }

        if (head == tail) {
            // There's only one node in the list
            delete head;
            head = nullptr;
            tail = nullptr;
            return;
        }

        Node* current = tail;
        tail = current->prev; // Update the tail pointer to the previous node
        tail->next = nullptr; // Update the next pointer of the new tail to nullptr
        delete current; // Delete the old tail node
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
    myList.insertAtBeginning(4);

    std::cout << "Doubly Linked List Forward: ";
    myList.displayForward();

    myList.removeLastNode();

    std::cout << "Doubly Linked List After Removing the Last Node: ";
    myList.displayForward();

    return 0;
}
