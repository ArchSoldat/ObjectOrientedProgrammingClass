#include <memory>

class ArrayNew {
private:
    std::unique_ptr<int[]> arr; // Replaces the raw pointer 
    int size;

public:
    ArrayNew(int s);
    ArrayNew(const ArrayNew& other);
    ~ArrayNew(); 
};