#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;


class Pointposition {
	 double x, y, z; // duzina sirina visina

public:
	void set_0(); 
	void set_random(const int a, const int b);
	void get_xyz();
	void print_xyz()const;
	double distance2D(Pointposition& point_1, Pointposition& point_2); 
	double distance3D(Pointposition& point_1, Pointposition& point_2); 

};