#include "zadatak2.hpp"
#include "Spider_Animal.hpp"
class Black_Widow : public Spider {
public:
	int legs() {
		return 8;
	}
	string species() {
		return "black widow";
	}
};