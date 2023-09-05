#include <iostream>

// Define a structure for each node
struct Node {
    int data;
    Node* next;
};

// Function to create a new node with the given data
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Function to insert a node at the end of the linked list
void insertNodeAtEnd(Node*& head, int data) {
    Node* newNode = createNode(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to display the linked list
void displayList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Function to delete the entire linked list
void deleteList(Node*& head) {
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
}

// Function to append a new node with the given data at the end of the linked list
void appendNode(Node*& head, int data) {
    Node* newNode = createNode(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}


int main() {
    Node* head = nullptr; // Initialize an empty linked list

    // Insert nodes with integers
    insertNodeAtEnd(head, 1);
    insertNodeAtEnd(head, 2);
    insertNodeAtEnd(head, 3);
    appendNode(head, 5);

    // Display the linked list
    std::cout << "Linked List: ";
    displayList(head);

    // Delete the linked list to free memory
    deleteList(head);

    return 0;
}
