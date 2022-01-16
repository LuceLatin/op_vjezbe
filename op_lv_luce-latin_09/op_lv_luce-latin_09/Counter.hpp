#include "zadatak2.hpp"
#include "Animal.hpp"
class Counter {
public:
	int total_legs = 0;
	void get_animal(Animal& animal) {
		cout << "Added : " << animal.species() << endl;
		total_legs = total_legs + animal.legs();
	}
	void print_total_legs() {
		cout << "Total number of legs : " << total_legs;
	}
};