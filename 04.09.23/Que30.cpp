#include <iostream>
#include <vector>

// Function to perform heapify-up (for both min and max heaps)
void heapifyUp(std::vector<int>& heap, int index) {
    while (index > 0) {
        int parentIndex = (index - 1) / 2;

        // For min heap, swap if the child is smaller than the parent
        // For max heap, swap if the child is larger than the parent
        if (heap[index] < heap[parentIndex]) { // For min heap
            std::swap(heap[index], heap[parentIndex]);
            index = parentIndex;
        } else {
            break; // Heap property is satisfied
        }
    }
}

// Function to insert an element into the heap
void insertIntoHeap(std::vector<int>& heap, int value) {
    heap.push_back(value);
    int lastIndex = heap.size() - 1;
    heapifyUp(heap, lastIndex);
}

int main() {
    std::vector<int> minHeap;

    // Insert elements into the min heap
    insertIntoHeap(minHeap, 5);
    insertIntoHeap(minHeap, 10);
    insertIntoHeap(minHeap, 3);
    insertIntoHeap(minHeap, 8);
    insertIntoHeap(minHeap, 1);

    std::cout << "Binary Min Heap: ";
    for (int num : minHeap) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
