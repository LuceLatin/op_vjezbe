#pragma once 
#include "zadatak2.hpp"
class Animal {
public:
	virtual int legs() = 0;
	virtual string species() = 0;
};