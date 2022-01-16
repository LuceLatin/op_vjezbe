#include "zadatak2.hpp"
#include "Spider_Animal.hpp"
class House_spider : public Spider {
public:
	int legs() {
		return 8;
	}
	string species() {
		return "house spider";
	}
};