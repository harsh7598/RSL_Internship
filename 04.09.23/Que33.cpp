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

    // Recursive heapify-down function
    void heapifyDown(int index) {
        int leftChild = 2 * index + 1;  // Left child
        int rightChild = 2 * index + 2; // Right child

        int largestOrSmallest = index; // Initialize the index of the largest or smallest element

        // Compare with left child (for max heap) or right child (for min heap)
        if (leftChild < heap.size() && ((isMinHeap && heap[leftChild] < heap[largestOrSmallest]) || (!isMinHeap && heap[leftChild] > heap[largestOrSmallest]))) {
            largestOrSmallest = leftChild;
        }

        // Compare with right child (for max heap) or left child (for min heap)
        if (rightChild < heap.size() && ((isMinHeap && heap[rightChild] < heap[largestOrSmallest]) || (!isMinHeap && heap[rightChild] > heap[largestOrSmallest]))) {
            largestOrSmallest = rightChild;
        }

        // If the largest or smallest element is not the current element, swap them
        if (largestOrSmallest != index) {
            std::swap(heap[index], heap[largestOrSmallest]);
            heapifyDown(largestOrSmallest); // Recursively check the child
        }
    }

    // Function to delete the root (min or max element) from the heap
    void deleteRoot() {
        if (heap.empty()) {
            return; // Heap is empty, nothing to delete
        }

        int lastElement = heap.back(); // Get the last element
        heap.pop_back();               // Remove the last element

        if (!heap.empty()) {
            // Replace the root with the last element
            heap[0] = lastElement;
            // Perform heapify-down to restore the heap property
            heapifyDown(0);
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

    // Delete the root (minimum element) from the min heap
    minHeap.deleteRoot();

    std::cout << "Binary Min Heap (After Deletion): ";
    minHeap.displayHeap();

    return 0;
}
