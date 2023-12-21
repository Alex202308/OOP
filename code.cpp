#include "vector.h"


DynamicArray::DynamicArray() : arr(nullptr), size(0), capacity(0) {}

// Parameterized constructor
DynamicArray::DynamicArray(int initialSize) : size(0), capacity(initialSize) {
    arr = new int[capacity];
}

// Destructor
DynamicArray::~DynamicArray() {
    delete[] arr;
}

// Return the current number of elements in the array
int DynamicArray::getSize() const {
    return size;
}

// Return the current capacity of the array
int DynamicArray::getCapacity() const {
    return capacity;
}

// Return true if the array is empty, false otherwise
bool DynamicArray::empty() const {
    return size == 0;
}

// Return the element at the specified index
int DynamicArray::at(int index) const {
    if (index >= 0 && index < size) {
        return arr[index];
    } else {
        // Handle index out of bounds
        std::cerr << "Index out of bounds\n";
        return -1; // You might want to throw an exception here instead
    }
}

// Add an element to the end of the array. Resize if necessary.
void DynamicArray::push_back(int value) {
    if (size == capacity) {
        // Resize the array
        int newCapacity = (capacity == 0) ? 1 : capacity * 2;
        int* newArr = new int[newCapacity];

        // Copy existing elements to the new array
        for (int i = 0; i < size; ++i) {
            newArr[i] = arr[i];
        }

        // Delete the old array and update pointers
        delete[] arr;
        arr = newArr;
        capacity = newCapacity;
    }

    // Add the new element and update size
    arr[size++] = value;
}

// Remove the last element from the array
void DynamicArray::pop_back() {
    if (size > 0) {
        --size;
    } else {
        // Handle underflow (trying to pop from an empty array)
        std::cerr << "Cannot pop from an empty array\n";
    }
}


