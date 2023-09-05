#include <iostream>

// Define a structure for each node in the binary search tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Function to insert a value into the binary search tree
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        // If the current node is null, create a new node with the given value
        return new Node(value);
    }

    // Recursively insert into the left or right subtree based on the value
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Function to perform in-order traversal and display the tree
void inOrderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }

    inOrderTraversal(root->left);
    std::cout << root->data << " ";
    inOrderTraversal(root->right);
}

int main() {
    Node* root = nullptr;

    // Insert values into the binary search tree
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    std::cout << "Binary Search Tree (In-Order Traversal): ";
    inOrderTraversal(root);
    std::cout << std::endl;

    return 0;
}
