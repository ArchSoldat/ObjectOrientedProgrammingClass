class Array
{
private:
    int* arr; // Raw pointer to the array
    int size;
public:
    Array(int s);
    Array(const Array& other);
    ~Array();
};