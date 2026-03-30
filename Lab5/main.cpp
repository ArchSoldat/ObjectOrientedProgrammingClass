#include <iostream>
#include "Array.h"
#include "ArrayNew.h"

int main() {
    std::cout << "--- Testing Raw Pointer Class (Array) ---" << std::endl;
    
    // 1. Instantiate the raw pointer array
    Array rawArray1(5);
    std::cout << "rawArray1 created." << std::endl;

    // 2. Test the copy constructor (Deep Copy)
    Array rawArray2 = rawArray1; 
    std::cout << "rawArray2 created via copy constructor." << std::endl;

    std::cout << "\n--- Testing Smart Pointer Class (ArrayNew) ---" << std::endl;

    // 3. Instantiate the unique_ptr array
    ArrayNew smartArray1(5);
    std::cout << "smartArray1 created." << std::endl;

    // 4. Test the copy constructor
    // Because unique_ptr cannot be copied directly, our custom copy 
    // constructor handles allocating a new unique_ptr and copying the data.
    ArrayNew smartArray2 = smartArray1;
    std::cout << "smartArray2 created via copy constructor." << std::endl;

    std::cout << "\nProgram ending. Watch the destructors work!" << std::endl;

    return 0;
    // As the program exits here, all objects go out of scope.
    // rawArray1 & rawArray2 will call ~Array() which explicitly calls delete[].
    // smartArray1 & smartArray2 will call ~ArrayNew(), and the unique_ptr 
    // will automatically delete its memory behind the scenes.
}