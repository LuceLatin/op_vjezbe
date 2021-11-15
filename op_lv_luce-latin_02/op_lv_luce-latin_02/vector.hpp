#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct MyVector {
    int* arr;
    size_t size;
    size_t capacity; //uns int

    void vector_new(size_t capacity);
    void vector_push_back(size_t element); // adds a new element at the end of the vector
    int& vector_front(); // returns a reference to the first element in the vector
    int& vector_back(); // returns a reference to the last element in the vector
    void print_vector();
    void vector_pop_back(); // removes the last element in the vector
    size_t vector_size(); //returns the number of the elements in the vector
    size_t vector_capacity();
    void vector_delete();
};
