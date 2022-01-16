#pragma once
#include "zadatak2.hpp"
#include "Animal.hpp"
class Spider : public Animal {
public:
	int legs() {
		return 8;
	}
	string species() {
		return "Spider";
	}
};