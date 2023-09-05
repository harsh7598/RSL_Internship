#include <iostream>
#include <vector>

class BinaryHeap {
private:
    std::vector<int> heap; // Dynamic array to store the heap elements
    bool isMinHeap;       // Flag to indicate if it's a min heap (true) or max heap (false)

public:
    BinaryHeap(bool isMinHeap) : isMinHeap(isMinHeap) {}

    // Function to insert an element into the heap
    void insert(int value) {
        heap.push_back(value); // Insert the element at the end
        int index = heap.size() - 1;
        heapifyUp(index);      // Heapify to maintain the heap property
    }

    // Recursive heapify-up function
    void heapifyUp(int index) {
        if (index <= 0) {
            return; // Base case: reached the root
        }

        int parentIndex = (index - 1) / 2; // Calculate the parent index

        // For min heap, swap if the child is smaller than the parent
        // For max heap, swap if the child is larger than the parent
        if ((isMinHeap && heap[index] < heap[parentIndex]) || (!isMinHeap && heap[index] > heap[parentIndex])) {
            std::swap(heap[index], heap[parentIndex]);
            heapifyUp(parentIndex); // Recursively check the parent
        }
    }

    // Function to display the heap
    void displayHeap() {
        std::cout << "Binary " << (isMinHeap ? "Min" : "Max") << " Heap: ";
        for (int num : heap) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Create a binary min heap
    BinaryHeap minHeap(true);

    // Insert elements into the min heap
    minHeap.insert(5);
    minHeap.insert(10);
    minHeap.insert(3);
    minHeap.insert(8);
    minHeap.insert(1);

    minHeap.displayHeap(); // Display the min heap

    // Create a binary max heap
    BinaryHeap maxHeap(false);

    // Insert elements into the max heap
    maxHeap.insert(5);
    maxHeap.insert(10);
    maxHeap.insert(3);
    maxHeap.insert(8);
    maxHeap.insert(1);

    maxHeap.displayHeap(); // Display the max heap

    return 0;
}
