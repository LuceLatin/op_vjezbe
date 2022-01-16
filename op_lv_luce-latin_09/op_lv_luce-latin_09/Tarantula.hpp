#include "zadatak2.hpp"
#include "Spider_Animal.hpp"
class Tarantula : public Spider {
public:
	int legs() {
		return 8;
	}
	string species() {
		return "tarantula";
	}
};