#include <iostream>
#include <iomanip>
#include <algorithm>
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))


using namespace std;


struct point
{
	int x, y;
};
struct rectangle
{
	//int* niz;
	point a, b;

};
struct circle
{
	point s;
	int r;
};

void minmax(unsigned* niz, unsigned ind, unsigned& min, unsigned& max);
int intersect(rectangle*& r, const circle& c, int br_rectangle);
int& funkcija(int* niz, int i);

