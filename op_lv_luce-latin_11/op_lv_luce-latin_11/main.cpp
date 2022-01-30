#include "header.hpp"

/*Napisati funkciju koja iz datoteke numbers.txt �ita prirodne brojeve. Koriste�i standardne algoritme:
1. baci iznimku ako ne postoji datoteka,
2. napuni vektor brojevima iz datoteke,
3. prebroji sve brojeve vece od 500,
4. na�i minimalni i maximalni element,
5. iz vektora izbaci brojeve manje od 300,
6. preostale brojeve sortiraj silazno.
Za u�itavanje iz datoteke i ispisivanje na konzolu koristite copy.*/


int main() {
	ifstream f;
	try {
		f.open("numbers.txt");
		file(f);
	}
	catch (string errorname) {
		cout << errorname << endl;
		return 1;
	}
}