#include "zadatak2.hpp"
#include "Bird_Animal.hpp"
class Owel : public Bird {
public:
	int legs() {
		return 2;
	}
	string species() {
		return "owel";
	}
};