#include "ArrayNew.h"

// Parameterized Constructor
ArrayNew::ArrayNew(int s) {
    size = s;
    // std::make_unique handles the allocation safely
    arr = std::make_unique<int[]>(size); 
}

// Copy Constructor 
ArrayNew::ArrayNew(const ArrayNew& other) {
    size = other.size;
    arr = std::make_unique<int[]>(size); // Allocate new memory
    for (int i = 0; i < size; i++) {
        arr[i] = other.arr[i]; // Copy the elements over
    }
}

// Destructor
ArrayNew::~ArrayNew() {
    // The unique_ptr automatically cleans up the memory!
    // You don't need to call delete[] here.
}