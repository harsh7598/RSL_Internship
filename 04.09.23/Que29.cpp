#include <iostream>
#include <vector>

// Function to heapify a binary min heap
void minHeapify(std::vector<int>& arr, int n, int i) {
    int smallest = i;  // Initialize the smallest as the root
    int left = 2 * i + 1;  // Left child
    int right = 2 * i + 2; // Right child

    // If the left child is smaller than the root
    if (left < n && arr[left] < arr[smallest]) {
        smallest = left;
    }

    // If the right child is smaller than the smallest so far
    if (right < n && arr[right] < arr[smallest]) {
        smallest = right;
    }

    // If the smallest element is not the root, swap them
    if (smallest != i) {
        std::swap(arr[i], arr[smallest]);
        // Recursively heapify the affected sub-tree
        minHeapify(arr, n, smallest);
    }
}

// Function to build a binary min heap
void buildMinHeap(std::vector<int>& arr) {
    int n = arr.size();
    // Start from the last non-leaf node and heapify each
    for (int i = n / 2 - 1; i >= 0; i--) {
        minHeapify(arr, n, i);
    }
}

// Function to display elements of a binary heap
void displayHeap(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Create a binary min heap
    std::vector<int> minHeap = {3, 9, 2, 7, 1, 8};

    std::cout << "Binary Min Heap:" << std::endl;
    displayHeap(minHeap);

    // Build the min heap
    buildMinHeap(minHeap);

    std::cout << "Min Heap After Building:" << std::endl;
    displayHeap(minHeap);

    return 0;
}
