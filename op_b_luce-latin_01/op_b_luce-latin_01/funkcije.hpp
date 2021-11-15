#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;


struct Matrix {
	int br_redaka;
	int br_stupaca;
	float** matrica = NULL;
};


void create(Matrix* m, int x, int y);
void unos(Matrix* m);
void random(Matrix* m);
void print(Matrix* m);
void zbroj(Matrix* m1, Matrix* m2, Matrix* m3);
void oduzimanje(Matrix* m1, Matrix* m2, Matrix* m3);
void mnozenje(Matrix* m1, Matrix* m2, Matrix* m3);
void transponiranje(Matrix* m1, Matrix* m3);
void destroymatrix(Matrix* m);
void minmax(int* niz, int ind, int& min, int& max);
void minimaxi(int* niz, int maks_ind, int& min, int& max);

