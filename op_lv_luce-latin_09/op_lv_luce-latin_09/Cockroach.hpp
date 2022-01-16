#include "zadatak2.hpp"
#include "Insect_Animal.hpp"
class Cockroach : public Insect {
public:
	int legs() {
		return 6;
	}
	string species() {
		return "cockroach";
	}
};