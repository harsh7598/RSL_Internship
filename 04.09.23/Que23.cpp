#include <iostream>

// Define a structure for each node in the linked list
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr; // Initialize front to nullptr to indicate an empty queue
        rear = nullptr;  // Initialize rear to nullptr to indicate an empty queue
    }

    // Function to enqueue (insert) an element into the queue
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            // If the queue is empty, set both front and rear to the new node
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        std::cout << "Enqueued " << value << " into the queue." << std::endl;
    }

    // Function to dequeue (remove) an element from the queue
    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty! Cannot dequeue." << std::endl;
            return;
        }

        int dequeuedValue = front->data;
        Node* temp = front;
        front = front->next;
        delete temp;

        if (!front) {
            // If the front becomes nullptr, the queue is now empty
            rear = nullptr;
        }

        std::cout << "Dequeued " << dequeuedValue << " from the queue." << std::endl;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Function to display the elements of the queue
    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty." << std::endl;
            return;
        }
        std::cout << "Queue elements: ";
        Node* current = front;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Destructor to release memory allocated for nodes
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

int main() {
    Queue queue;
    int choice, value;

    while (true) {
        std::cout << "Queue Operations Menu:" << std::endl;
        std::cout << "1. Enqueue" << std::endl;
        std::cout << "2. Dequeue" << std::endl;
        std::cout << "3. Display" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter the value to enqueue: ";
                std::cin >> value;
                queue.enqueue(value);
                break;
            case 2:
                queue.dequeue();
                break;
            case 3:
                queue.display();
                break;
            case 4:
                std::cout << "Exiting the program." << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
