#include <iostream>
#include <time.h>
#include <cmath>
#include <string>

using namespace std;


class Target {
public:
	double x1, y1, z1;
	double x2, y2, z2;
	unsigned hit = 0;
	unsigned miss = 0;
};

class Weapon {
public:
	double x, y, z;
	unsigned max_bullet;
	unsigned bullet;
	void shoot();
	void reload();
};

unsigned hit_miss();
