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

    // Function to remove a node at a specified position
    void removeNodeAtPosition(int position) {
        if (!head) {
            // List is empty, nothing to remove
            return;
        }

        Node* current = head;

        // Handle the case for removing the head node (position == 0)
        if (position == 0) {
            head = current->next;
            if (head) {
                head->prev = nullptr;
            }
            delete current;
            return;
        }

        int currentPosition = 0;

        // Traverse the list to find the node to remove
        while (current && currentPosition != position) {
            current = current->next;
            currentPosition++;
        }

        if (!current) {
            // Position is out of bounds, nothing to remove
            return;
        }

        // Update the next and prev pointers to remove the node
        if (current->prev) {
            current->prev->next = current->next;
        }
        if (current->next) {
            current->next->prev = current->prev;
        }

        delete current; // Delete the node to free memory
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

    int positionToRemove = 2;
    myList.removeNodeAtPosition(positionToRemove);

    std::cout << "Doubly Linked List After Removing Node at Position " << positionToRemove << ": ";
    myList.displayForward();

    return 0;
}
