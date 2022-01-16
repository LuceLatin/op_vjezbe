#include "zadatak2.hpp"
#include "Insect_Animal.hpp"
class Ladybug : public Insect {
public:
	int legs() {
		return 6;
	}
	string species() {
		return "ladybug";
	}
};
/*int Ladybug::legs()
{
	return 6;
}
string Ladybug::species()
{
	return "Ladybug";
}*/
// ZA CPP