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

    // Function to perform in-order traversal and display the tree
    void displayInOrder() {
        inOrderTraversal(root);
        std::cout << std::endl;
    }

    void inOrderTraversal(Node* current) {
        if (current == nullptr) {
            return;
        }

        inOrderTraversal(current->left);
        std::cout << current->data << " ";
        inOrderTraversal(current->right);
    }

    // Function to delete a node with a given value
    void deleteNode(int value) {
        root = deleteRecursive(root, value);
    }

    Node* deleteRecursive(Node* current, int value) {
        if (current == nullptr) {
            return current;
        }

        if (value < current->data) {
            current->left = deleteRecursive(current->left, value);
        } else if (value > current->data) {
            current->right = deleteRecursive(current->right, value);
        } else {
            // Node found, handle the deletion cases
            if (current->left == nullptr) {
                Node* temp = current->right;
                delete current;
                return temp;
            } else if (current->right == nullptr) {
                Node* temp = current->left;
                delete current;
                return temp;
            }

            // Node with two children, find the in-order successor
            Node* successor = findMinNode(current->right);
            current->data = successor->data;
            current->right = deleteRecursive(current->right, successor->data);
        }
        return current;
    }

    Node* findMinNode(Node* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
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

    std::cout << "Binary Search Tree (In-Order Traversal): ";
    bst.displayInOrder();

    // Delete a node (e.g., delete 30)
    int valueToDelete = 30;
    bst.deleteNode(valueToDelete);
    std::cout << "Binary Search Tree after deleting " << valueToDelete << ": ";
    bst.displayInOrder();

    return 0;
}
