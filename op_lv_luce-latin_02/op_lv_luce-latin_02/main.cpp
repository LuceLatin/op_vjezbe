#include "vector.hpp"
#include "funkcije.hpp"


int main()
{
    //zadatak 1
    // Napisati funkciju koja ra�una najve�i i najmanji broj u nizu od n prirodnih
    //brojeva.Funkcija vra�a tra�ene brojeve pomo�u referenci.
    /*
    unsigned niz[] = { 3, 5, 189, 15, 65, 55 };
    unsigned min = niz[0];
    unsigned max = niz[0];
    unsigned maks_ind = sizeof(niz) / sizeof(int);
    minmax(niz, maks_ind, min, max);
    cout << "min=" << min << " , max=" << max;
    */


    //zadatak 2
    /*Napisati funkciju koja vra�a referencu na neki element niza. Koriste�i povratnu vrijednost funkcije kao lvalue uve�ajte i-ti element niza za jedan.*/
    /*
    int arr[] = { 5, 7, 98, -7, 11, 8 };
    cout << "Unesite broj:" << endl;
    int n;
    cin >> n;
    funkcija(arr, n)=arr[n]+1;
    cout << arr[n] << endl;
    */


    // zadatak 3
    /*Definirati strukturu kruznica i strukturu pravokutnik koja predstavlja
pravokutnik �ije su stranice paralelne sa osima apscisa i ordinata. Napisati
funkciju koja prima niz pravokutnika i jednu kruznicu i vra�a broj pravokutnika koji sijeku kru�nicu. Niz pravokutnika i kru�nica �alju se u funkciju
pomo�u const referenci. */


//rectangle ab; //????? rectangle* niz; 
    int br_rectangle;
    //int x, y;
    cout << "Unesite broj pravokutnika:" << endl;
    cin >> br_rectangle;
    rectangle* niz = new rectangle[br_rectangle];
    cout << "Unesite tocke pravokutnika:" << endl;
    for (int i = 0; i < br_rectangle; i++)
    {
        cin >> niz[i].a.x >> niz[i].a.y >> niz[i].b.x >> niz[i].b.y;

    }
    circle c;
    c.s = { 3, 2 };
    c.r = 1;

    int rj;
    rj = intersect(niz, c, br_rectangle);
    cout << "Broj pravokutnika koji sijeku kruznicu je:" << rj << endl;
    delete[] niz;

    //zadatak 4
    /*
    Definirati strukturu koja opisuje vektor. Struktura se sastoji od niza int
    elemenata, logi�ke i fizi�ke veli�ine niza. Fizi�ka veli�ina je inicijalno init, a
    kada se ta veli�ina napuni vrijednostima, alocira se duplo.
    Napisati funkcije vector_new, vector_delete, vector_push_back, vector_pop_back,
    vector_front, vector_back i vector_size. Funkcije su �lanovi strukture.
*/
/*
MyVector v;

cout << "Unesite capacity:" << endl;
cin >> v.capacity;
v.vector_new(v.capacity);


size_t element;
cout << "Unesi element, Ctrl+d (linux) ili Ctrl+z (win) za kraj unosa" << endl;
v.size = 0;
while (cin >> element)
    v.vector_push_back(element);
cout << "END" << endl;

v.print_vector();


cout << "first element " << v.vector_front() << endl;

cout << "last element " << v.vector_back() << endl;

cout << "removing last element" << endl;
v.vector_pop_back();
v.print_vector();

cout << "size " << v.vector_size() << endl;
cout << "capacity " << v.vector_capacity() << endl;

v.vector_delete();
*/
}
