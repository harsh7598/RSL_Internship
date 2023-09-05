#include <iostream>

// Define a structure for each node in the binary search tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
private:
    Node* root;

public:
    BinarySearchTree() : root(nullptr) {}

    // Function to insert a value into the binary search tree
    void insert(int value) {
        root = insertRecursive(root, value);
    }

    // Recursive function to insert a value into the binary search tree
    Node* insertRecursive(Node* current, int value) {
        if (current == nullptr) {
            return new Node(value);
        }

        if (value < current->data) {
            current->left = insertRecursive(current->left, value);
        } else if (value > current->data) {
            current->right = insertRecursive(current->right, value);
        }

        return current;
    }

    // Function to check if a value exists in the binary search tree
    bool search(int value) {
        return searchRecursive(root, value);
    }

    // Recursive function to search for a value in the binary search tree
    bool searchRecursive(Node* current, int value) {
        if (current == nullptr) {
            return false;
        }

        if (value == current->data) {
            return true;
        } else if (value < current->data) {
            return searchRecursive(current->left, value);
        } else {
            return searchRecursive(current->right, value);
        }
    }

    // Function to display the binary search tree in in-order traversal
    void displayInOrder() {
        inOrderTraversal(root);
        std::cout << std::endl;
    }

    // Recursive function to perform in-order traversal
    void inOrderTraversal(Node* current) {
        if (current == nullptr) {
            return;
        }

        inOrderTraversal(current->left);
        std::cout << current->data << " ";
        inOrderTraversal(current->right);
    }
};

int main() {
    BinarySearchTree bst;

    // Insert values into the binary search tree
    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    bst.insert(60);
    bst.insert(80);

    std::cout << "Binary Search Tree In-Order Traversal: ";
    bst.displayInOrder();

    int searchValue = 40;
    if (bst.search(searchValue)) {
        std::cout << searchValue << " is found in the binary search tree." << std::endl;
    } else {
        std::cout << searchValue << " is not found in the binary search tree." << std::endl;
    }

    searchValue = 90;
    if (bst.search(searchValue)) {
        std::cout << searchValue << " is found in the binary search tree." << std::endl;
    } else {
        std::cout << searchValue << " is not found in the binary search tree." << std::endl;
    }

    return 0;
}
