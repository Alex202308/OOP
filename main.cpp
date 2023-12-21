#include <iostream>
#include "vector.h"

int main ()
{
    // Example usage
    DynamicArray myArray(3);
    myArray.push_back(1);
    myArray.push_back(2);
    myArray.push_back(3);

    std::cout << "Size: " << myArray.getSize() << ", Capacity: " << myArray.getCapacity() << std::endl;

    myArray.push_back(4);
    std::cout << "Size: " << myArray.getSize() << ", Capacity: " << myArray.getCapacity() << std::endl;

    myArray.pop_back();
    std::cout << "Size: " << myArray.getSize() << ", Capacity: " << myArray.getCapacity() << std::endl;

    return 0;

}