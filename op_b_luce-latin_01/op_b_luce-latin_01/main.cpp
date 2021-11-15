#include "funkcije.hpp"

int main() {


	/*
	int a, b, s;
	std::cout << "unesi dva broja" << std::endl;
	std::cin >> a >> b;
	s = a + b;
	std::cout << "suma je " << s << std::endl;
	*/


	//zadatak 1
	/*
	bool flag;
		std::cout << "unesi " << true << " - " << false << std::endl;
		std::cin >> flag;
		std::cout << std::boolalpha << flag << std::endl;
		int a = 255;
		std::cout << "hex " << std::hex << a << std::endl;
		std::cout << "dec " << std::dec << a << std::endl;
		std::cout << "oct " << std::oct << a << std::endl;
		double pi = 3.141592;
		std::cout << "pi = " << std::scientific << std::uppercase;
		std::cout << std::setprecision(7) << std::setw(20) << std::setfill('0'
		);
		std::cout << pi << std::endl;
	*/




	/*
	//zadatak 2
	Matrix m1;
	Matrix m2;
	create(&m1, 2, 3);
	random(&m1);
	print(&m1);
	cout << " -------- " << endl;
	*/
	/*
	create(&m2, 3, 4);
	random(&m2);
	print(&m2);
	cout << " -------- " << endl;
	Matrix m3; //prvo navedemo matricu s imenon i onda u novom redu samo poziv funkcije s ton matricon
	//zbroj(&m1, &m2, &m3);
	//oduzimanje(&m1, &m2, &m3);
	mnozenje(&m1, &m2, &m3);
	//transponiranje(&m1, &m3);
	print(&m3);
	destroymatrix(&m1);
	destroymatrix(&m2);
	destroymatrix(&m3);
	*/


	//zadatak 3 i 4
	
	int niz[] = { 3,5, 189,-15, 65, -55 };
	int min = niz[0];
	int max = niz[0];
	int maks_ind = sizeof(niz) / sizeof(int);
	//minmax(niz, maks_ind, min, max);
	minimaxi(niz, maks_ind, min, max);
	cout << "min=" << min << " , max=" << max;
	
}