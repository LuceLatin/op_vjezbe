#include "vector.hpp"
#include "funkcije.hpp"


//zadatak 1

void minmax(unsigned* niz, unsigned ind, unsigned& min, unsigned& max)
{
    for (int i = 0; i < ind; i++)
    {
        if (niz[i] > max)
            max = niz[i];
        if (niz[i] < min)
            min = niz[i];
    }
}


//zadatak 2

int& funkcija(int* niz, int i)
{
    return niz[i];
}


//zadatak 3
int intersect(rectangle*& r, const circle& c, int br_rectangle)
{
    int xn, yn;
    int xx, yy;
    int count = 0;
    for (int i = 0; i < br_rectangle; i++)
    {
        xn = MAX(r[i].a.x, MIN(c.s.x, r[i].b.x));
        yn = MAX(r[i].a.y, MIN(c.s.y, r[i].b.y));
        xx = xn - (c.s.x);
        yy = yn - (c.s.y);
        if ((xx * xx + yy * yy) <= (c.r * c.r))
            count++;
    }
    return count;
}




//zadatak 4

void MyVector::vector_new(size_t capacity) //primam broj od capac
{
    //this->capacity = capacity;
    arr = new int[capacity];

}

void MyVector::vector_delete() //void MyVector::vector_delete(size_t sz)
{
    delete[] arr;
}

void MyVector::vector_push_back(size_t element)  //adds a new element at the end of the vector
{
    //cout << "ss" << size << endl; // ode je size 0
    //size++;                       // ode se uveca za 1
    //cout << "ss" << size << endl; // ode je size 1

    if (size == capacity)
    {
        int* old = arr;

        arr = new int[capacity = capacity * 2];  //ILI poziv vector_new NISU PRIBACENI CLANOVI...
        for (int i = 0; i < size; i++)
        {
            arr[i] = old[i];
        }
        delete[] old;
    }
    arr[size] = element;
    size++; // ide na kraj tako da bi se na ovom arr[size] bilo nula na prvom unosu
}



void MyVector::vector_pop_back()  //removes the last element in the vector
{
    size = size - 1;
}


int& MyVector::vector_front()  //returns a reference to the first element in the vector
{
    //int firstElement = arr[0];
    return arr[0];  //????
}


int& MyVector::vector_back()  //returns a reference to the last element in the vector
{
    //int lastElement = arr[size-1];
    return arr[size-1];  //????
}

size_t MyVector::vector_size()  //void MyVector::vector_size(size_t sz)
{
    return size;
}

size_t MyVector::vector_capacity()
{
    return capacity;
}


void MyVector::print_vector()
{
    for (size_t i = 0; i < size; ++i)  //for (size_t i = 0; i < vector_size(); ++i)
        cout << arr[i] << " ";
    cout << endl;
}
