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

    // Function to insert a node with a given value at a specified position
    void insertNodeAtPosition(int position, int value) {
        if (!head && position != 0) {
            // List is empty, and position is not 0, so we can't insert
            return;
        }

        Node* newNode = new Node(value);

        if (position == 0) {
            // Insert at the beginning
            newNode->next = head;
            if (head) {
                head->prev = newNode;
            }
            head = newNode;
            if (!tail) {
                tail = newNode;
            }
            return;
        }

        Node* current = head;
        int currentPosition = 0;

        // Traverse to the specified position or the end of the list
        while (currentPosition < position && current->next) {
            current = current->next;
            currentPosition++;
        }

        // Insert at the specified position
        newNode->prev = current->prev;
        newNode->next = current;
        if (current->prev) {
            current->prev->next = newNode;
        } else {
            head = newNode; // Update head if inserting at position 0
        }
        current->prev = newNode;
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

    int positionToInsert = 1;
    int valueToInsert = 4;
    myList.insertNodeAtPosition(positionToInsert, valueToInsert);

    std::cout << "Doubly Linked List After Inserting " << valueToInsert << " at Position " << positionToInsert << ": ";
    myList.displayForward();

    return 0;
}
