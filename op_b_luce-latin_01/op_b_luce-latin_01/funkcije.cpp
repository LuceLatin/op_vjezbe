#include "funkcije.hpp"


void create(Matrix* m, int x, int y) //reference Matrix &m
{

	m->br_redaka = x;
	m->br_stupaca = y;
	m->matrica = new float* [x]; //(float*)malloc(x*sizeof(float*))
	for (int i = 0; i < x; i++)
	{
		m->matrica[i] = new float[y]; //->referenca . pointeri ->
	}

}


//funkciju za unos matrice mxn,
void unos(Matrix* m)
{
	for (int i = 0; i < m->br_redaka; i++)
	{
		for (int j = 0; j < m->br_stupaca; j++)
		{
			cout << "Unesi elemente matrice: " << endl;
			cin >> m->matrica[i][j];
		}
	}
}


// funkciju za generiranje matrice mxn s elementima u rasponu [a,b],
void random(Matrix* m)
{
	float a;
	float b;
	srand(time(NULL));
	cout << "Unesi interval a i b: " << endl;
	cin >> a >> b;
	for (int i = 0; i < m->br_redaka; i++)
	{
		for (int j = 0; j < m->br_stupaca; j++) 
		{
			m->matrica[i][j] = (float)(a + rand() % (int)(b - a) + 1);

		} 
	}
}


//funkciju za ispisivanje matrice. Elementi matrice se ispisuju na èetiri decimale, poravnati udesno
void print(Matrix* m)
{
	if (m->matrica == NULL) {
		cout << "Nepostojeca matrica" << endl;
	}
	else
	{
		for (int i = 0; i < m->br_redaka; i++)
		{
			for (int j = 0; j < m->br_stupaca; j++)
			{
				cout << right << setw(10) << fixed << setprecision(4) << m->matrica[i][j] << " "; //ispis broja s 4 decimale (iomanip)
			}
			cout << endl;
		}
	}
}


void zbroj(Matrix* m1, Matrix* m2, Matrix* m3)
{

	if (m1->br_redaka != m2->br_redaka)
	{
		cout << "Matrice se ne mogu zbrajati (razlicit broj redaka)!" << endl;
	}
	else if (m1->br_stupaca != m2->br_stupaca)
	{
		cout << "Matrice se ne mogu zbrajati (razlicit broj stupaca)!" << endl;
	}
	else
	{
		create(m3, m1->br_redaka, m1->br_stupaca);
		//m3.br_redaka = m1->br_redaka;
		//m3.br_stupaca = m1->br_stupaca;

		for (int i = 0; i < m1->br_redaka; i++)
		{
			for (int j = 0; j < m1->br_stupaca; j++)
			{
				m3->matrica[i][j] = m1->matrica[i][j] + m2->matrica[i][j];

			}
		}
	}
}


void oduzimanje(Matrix* m1, Matrix* m2, Matrix* m3)
{
	if (m1->br_redaka != m2->br_redaka)
	{
		cout << "Matrice se ne mogu oduzimati (razlicit broj redaka)!" << endl;
	}
	else if (m1->br_stupaca != m2->br_stupaca)
	{
		cout << "Matrice se ne mogu oduzimati (razlicit broj stupaca)!" << endl;
	}
	else
	{
		//m3.br_redaka = m1->br_redaka;
		//m3.br_stupaca = m1->br_stupaca;
		create(m3, m1->br_redaka, m1->br_stupaca);
		for (int i = 0; i < m1->br_redaka; i++)
		{
			for (int j = 0; j < m1->br_stupaca; j++)
			{
				m3->matrica[i][j] = m1->matrica[i][j] - m2->matrica[i][j];

			}
		}
	}
}


// funkcija za mnozenje matrice
void mnozenje(Matrix* m1, Matrix* m2, Matrix* m3)
{
	if (m1->br_stupaca != m2->br_redaka)
	{
		cout << "Matrice se ne mogu mnoziti (broj stupaca matrice 1 nije isti kao broj redaka matrice 2)!" << endl;
	}
	else
	{
		create(m3, m1->br_redaka, m2->br_stupaca);
		//m3.br_redaka = m1->br_redaka;
		//m3.br_stupaca = m2->br_stupaca;
		for (int i = 0; i < m3->br_redaka; i++)
		{
			for (int j = 0; j < m3->br_stupaca; j++)
			{
				int sum = 0;
				for (int k = 0; k < m1->br_stupaca; k++)
				{
					sum += (m1->matrica[i][k] * m2->matrica[k][j]);
				}
				m3->matrica[i][j] = sum;
			}
		}

	}
}


//funkciju za trasponiranje matrice
void transponiranje(Matrix* m1, Matrix* m3)
{

	//m3.br_redaka = m1->br_stupaca;
	//m3.br_stupaca = m1->br_redaka;
	create(m3, m1->br_stupaca, m1->br_redaka);
	for (int i = 0; i < m3->br_stupaca; i++)
	{
		for (int j = 0; j < m3->br_redaka; j++)
		{
			m3->matrica[j][i] = m1->matrica[i][j];

		}
	}
}


void destroymatrix(Matrix* m)
{
	for (int i = 0; i < m->br_redaka; i++)
	{
		delete[] m->matrica[i];
	}
	delete[] m->matrica; //[]
}


//Napisati iterativnu funkciju za traženje najveæeg i najmanjeg broja u nizu.
void minmax(int* niz, int ind, int& min, int& max)
{
	for (int i = 0; i < ind; i++)
	{
		if (niz[i] > max)
			max = niz[i];
		if (niz[i] < min)
			min = niz[i];
	}
}



//Napisati rekurzivnu funkciju za traženje najveæeg i najmanjeg broja u nizu.
void minimaxi(int* niz, int maks_ind, int& min, int& max)
{
	if (maks_ind == 0)
		return;
	else {
		if (niz[maks_ind - 1] > max)
		{
			max = niz[maks_ind - 1];
		}
		else if (niz[maks_ind - 1] < min)
		{
			min = niz[maks_ind - 1];
		}
	}
	return  minimaxi(niz, maks_ind - 1, min, max);
}