#include "Array.h"

// Cosntructor
Array::Array(int s) {
    size = s;
    arr = new int[size]{0}; // Allocates memory and initializes to 0
}

// Copy Constructor (Deep Copy)
Array::Array(const Array& other) {
    size = other.size;
    arr = new int[size];
    for (int i=0; i<size; i++){
        arr[i] = other.arr[i];
    }
}

// Destructor
Array::~Array() {
    delete[] arr;
}