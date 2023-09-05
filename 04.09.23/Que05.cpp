#include <iostream>

// Define the structure for a singly linked list node
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to remove the first node from the linked list
void removeFirstNode(Node*& head) {
    // Check if the list is empty
    if (head == nullptr) {
        std::cout << "List is empty. Nothing to remove." << std::endl;
        return;
    }

    // Store the address of the first node in a temporary pointer
    Node* temp = head;

    // Update the head pointer to point to the second node (if it exists)
    head = head->next;

    // Delete the first node to free the memory
    delete temp;
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    std::cout << "Original Linked List: ";
    printLinkedList(head);

    // Remove the first node
    removeFirstNode(head);

    std::cout << "Linked List after removing the first node: ";
    printLinkedList(head);

    // Clean up memory (free the remaining nodes)
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
