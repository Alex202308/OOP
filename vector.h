#include <iostream>

class DynamicArray {
private:
    int* arr;        // raw pointer to array
    int size;        // count of current elements
    int capacity;    // maximal count of elements

public:
    // Default constructor
    DynamicArray();

    // Parameterized constructor
    DynamicArray(int initialSize);

    // Destructor
    ~DynamicArray();
    // Return the current number of elements in the array
    int getSize() const;

    // Return the current capacity of the array
    int getCapacity() const;

    // Return true if the array is empty, false otherwise
    bool empty() const;

    // Return the element at the specified index
    int at(int index) const;

    // Add an element to the end of the array. Resize if necessary.
    void push_back(int value);

    // Remove the last element from the array
    void pop_back();
};
