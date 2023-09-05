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

    // Function to prepend a node with a given value to the beginning of the doubly linked list
    void prepend(int value) {
        insertAtBeginning(value); // Reusing the existing insertAtBeginning function
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

    // Function to display the doubly linked list in reverse
    void displayReverse() {
        Node* current = tail;
        while (current) {
            std::cout << current->data << " ";
            current = current->prev;
        }
        std::cout << std::endl;
    }

    // Function to delete a node with a specific value from the list
    void deleteNode(int value) {
        // ... (Delete node code as in the previous answer)
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

    std::cout << "Doubly Linked List Reverse: ";
    myList.displayReverse();

    myList.prepend(0);

    std::cout << "Doubly Linked List After Prepending Node with Value 0: ";
    myList.displayForward();

    myList.deleteNode(2);

    std::cout << "Doubly Linked List After Deleting Node with Value 2: ";
    myList.displayForward();

    return 0;
}
