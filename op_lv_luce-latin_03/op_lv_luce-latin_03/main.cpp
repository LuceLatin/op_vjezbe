#include "vector.hpp"

int main() {

	//zadatak 1
	//Napisati funkcije za unos i ispis vektora brojeva.
	/*
	vector <int> v;
	int n;
	int a, b;
	//cout << "Unesite broj elemenata u vectoru: ";
	//cin >> n;
	//unos(v, n);
	
	cout << "Unesite interval a i b: "<< endl;
	cin >> a >> b;
	unos2(v, a, b);
	n = v.size();
	ispis(v, n);
	*/
	//zadatak 2
	//Koristeæi funkcije iz prvog zadatka unijeti dva vektora i formirati novi vektor koji
	//se sastoji od elemenata iz prvog vektora koji nisu u drugom vektoru.
	/*
	int n;
	cout << "Unesite broj elemenata u vectoru: ";
	cin >> n;
	vector <int> v1;
	unos(v1, n);
	ispis(v1, n);
	vector <int> v2;
	unos(v2, n);
	ispis(v2, n);
	vector <int> v3;
	novi(v1, v2, v3);
	ispis(v3, v3.size());
	*/

	//zadatak 3
	//Koristeæi STL funkcije sortirajte vektor, ubacite 0 ispred najmanjeg elementa, te
	//sumu svih elemenata iza najveæeg elementa.
	/*
	vector <int> v;
	int n;
	cout << "Unesite broj elemenata u vectoru: ";
	cin >> n;
	unos(v, n);
	sortiranje(v);
	ispis(v, v.size());
	*/

	//zadatak 4
	//Napisati funkciju u za uklanjanje elementa iz vektora sa što manje operacija.Poredak elemenata u vektoru nije bitan.
	
	vector <int> v;
	int n;
	int m;
	cout << "Unesite broj elemenata u vectoru: ";
	cin >> n;
	unos(v, n);
	ispis(v, v.size());
	izbrisi(v);
	m = v.size();
	ispis(v, m - 1);
	

	//zadatak 5
	//Napisati funkciju koja broji koliko pojavljivanja danog podstringa ima u stringu koristeæi funkcije standardne biblioteke.
	
	/*
	string s1 = "spa je predmet op je predmet mat je predmet";
	string s2 = "predmet";
	ponovi(s1, s2);
	*/


	//zadatak 6
	//Napišite funkciju koja stringove, koje korisnik unosi, sprema u vektor stingova,
	//svaki string preokrene te sortira vektor po preokrenutim stringovima
	
	/*
	vector <string> str;
	funkcija(str);
	*/
}