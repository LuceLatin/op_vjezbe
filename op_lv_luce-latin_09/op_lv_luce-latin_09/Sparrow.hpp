#include "zadatak2.hpp"
#include "Bird_Animal.hpp"

class Sparrow : public Bird {
public:
	int legs() {
		return 2;
	}
	string species() {
		return "sparrow";
	}
};