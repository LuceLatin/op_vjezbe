#pragma once
#include "zadatak2.hpp"
#include "Animal.hpp"
class Insect : public Animal {
public:
	int legs() {
		return 6;
	}
	string species() {
		return "Insect";
	}
};