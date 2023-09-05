#include <iostream>

// Define the maximum size of the queue
const int MAX_SIZE = 100;

class Queue {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;

public:
    Queue() {
        front = -1; // Initialize front to -1 to indicate an empty queue
        rear = -1;  // Initialize rear to -1 to indicate an empty queue
    }

    // Function to enqueue (insert) an element into the queue
    void enqueue(int value) {
        if (rear == MAX_SIZE - 1) {
            std::cout << "Queue is full! Cannot enqueue more elements." << std::endl;
            return;
        }

        if (isEmpty()) {
            front = 0; // If the queue is empty, set front to 0
        }

        arr[++rear] = value;
        std::cout << "Enqueued " << value << " into the queue." << std::endl;
    }

    // Function to dequeue (remove) an element from the queue
    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty! Cannot dequeue." << std::endl;
            return;
        }

        int dequeuedValue = arr[front];
        if (front == rear) {
            // If there is only one element in the queue, reset front and rear
            front = -1;
            rear = -1;
        } else {
            front++;
        }

        std::cout << "Dequeued " << dequeuedValue << " from the queue." << std::endl;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == -1;
    }

    // Function to display the elements of the queue
    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty." << std::endl;
            return;
        }
        std::cout << "Queue elements: ";
        for (int i = front; i <= rear; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
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
