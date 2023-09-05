#include <iostream>
#include <vector>

// Function to perform heapify-down (for both min and max heaps)
void heapifyDown(std::vector<int>& heap, int index, int heapSize, bool isMinHeap) {
    int largestOrSmallest = index; // Initialize the index of the largest or smallest element
    int leftChild = 2 * index + 1;  // Left child
    int rightChild = 2 * index + 2; // Right child

    // Compare with left child (for max heap) or right child (for min heap)
    if (leftChild < heapSize && ((isMinHeap && heap[leftChild] < heap[largestOrSmallest]) || (!isMinHeap && heap[leftChild] > heap[largestOrSmallest]))) {
        largestOrSmallest = leftChild;
    }

    // Compare with right child (for max heap) or left child (for min heap)
    if (rightChild < heapSize && ((isMinHeap && heap[rightChild] < heap[largestOrSmallest]) || (!isMinHeap && heap[rightChild] > heap[largestOrSmallest]))) {
        largestOrSmallest = rightChild;
    }

    // If the largest or smallest element is not the current element, swap them
    if (largestOrSmallest != index) {
        std::swap(heap[index], heap[largestOrSmallest]);
        heapifyDown(heap, largestOrSmallest, heapSize, isMinHeap);
    }
}

// Function to delete the root (min or max element) from the heap
void deleteRoot(std::vector<int>& heap, bool isMinHeap) {
    if (heap.empty()) {
        return; // Heap is empty, nothing to delete
    }

    int lastElement = heap.back(); // Get the last element
    heap.pop_back();               // Remove the last element
    int heapSize = heap.size();

    if (heapSize > 0) {
        // Replace the root with the last element
        heap[0] = lastElement;
        // Perform heapify-down to restore the heap property
        heapifyDown(heap, 0, heapSize, isMinHeap);
    }
}

int main() {
    // Create a binary min heap
    std::vector<int> minHeap = {1, 3, 5, 7, 9};

    std::cout << "Binary Min Heap (Before Deletion): ";
    for (int num : minHeap) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Delete the root (minimum element) from the min heap
    deleteRoot(minHeap, true);

    std::cout << "Binary Min Heap (After Deletion): ";
    for (int num : minHeap) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
