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

    // Function to insert a node at the end of the doubly linked list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (!tail) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
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

    // Function to display the doubly linked list backward
    void displayBackward() {
        Node* current = tail;
        while (current) {
            std::cout << current->data << " ";
            current = current->prev;
        }
        std::cout << std::endl;
    }

    // Function to delete a node with a specific value from the list
    void deleteNode(int value) {
        Node* current = head;

        while (current) {
            if (current->data == value) {
                if (current->prev) {
                    current->prev->next = current->next;
                } else {
                    head = current->next;
                }

                if (current->next) {
                    current->next->prev = current->prev;
                } else {
                    tail = current->prev;
                }

                delete current;
                return;
            }

            current = current->next;
        }
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

    myList.insertAtEnd(1);
    myList.insertAtEnd(2);
    myList.insertAtEnd(3);

    std::cout << "Doubly Linked List Forward: ";
    myList.displayForward();

    std::cout << "Doubly Linked List Backward: ";
    myList.displayBackward();

    myList.insertAtBeginning(0);

    std::cout << "Doubly Linked List After Insertion at Beginning: ";
    myList.displayForward();

    myList.deleteNode(2);

    std::cout << "Doubly Linked List After Deleting Node with Value 2: ";
    myList.displayForward();

    return 0;
}
