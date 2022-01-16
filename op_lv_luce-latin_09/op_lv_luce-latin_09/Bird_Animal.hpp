#pragma once
#include "zadatak2.hpp"
#include "Animal.hpp"
class Bird : public Animal {
public:
	int legs() {
		return 2;
	}
	string species() {
		return "Bird";
	}
};
