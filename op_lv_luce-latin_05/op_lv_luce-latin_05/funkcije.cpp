#include "point.hpp"
//#include "target.hpp"

inline void Pointposition::set_0()
{
	x, y, z = 0;
}

void Pointposition::set_random(const int a, const int b)
{
	srand(time(NULL));
	x = a + rand() % (b - a + 1); 
	y = a + rand() % (b - a + 1);
	z = a + rand() % (b - a + 1);
}

inline void Pointposition::get_xyz()
{
	cin >> x >> y >> z;
}

inline void Pointposition::print_xyz()const
{
	cout << x << y << z << endl;
}


inline double Pointposition:: distance2D(Pointposition& point_1, Pointposition& point_2) //const? 2 tocke
{
	return sqrt(pow(point_2.x - point_1.x, 2.0) + pow(point_2.y - point_1.y, 2.0));
}


inline double Pointposition:: distance3D(Pointposition& point_1, Pointposition& point_2) //moraju bit 2 tocke
{
	return sqrt(pow(point_2.x - point_1.x, 2.0) + pow(point_2.y - point_1.y, 2.0) + pow(point_2.z - point_1.z, 2.0));
}

//target
#include "target.hpp"

inline void Weapon::shoot() {
	if (bullet > 0)
		bullet = bullet - 1;
}

inline void Weapon::reload() {
	if (bullet < max_bullet)
		bullet = bullet + 1;
}

unsigned hit_miss()
{
	srand(time(NULL));
	int n_targets;
	unsigned hit;
	cout << "Input number of targets: " << endl;
	cin >> n_targets;
	Target* target = new Target[n_targets * 2];
	Target hit_or_miss;
	for (int i = 0; i <= n_targets; ++i) {
		target[i].x1 = (rand() % 10) + 1;
		target[i].y1 = (rand() % 10) + 1;
		target[i].z1 = (rand() % 10) + 1;
		target[i].x2 = (rand() % 10) + 1;
		target[i].y2 = (rand() % 10) + 1;
		target[i].z2 = (rand() % 10) + 1;
	}
	Weapon gun;
	gun.bullet = 6;
	gun.x = (rand() % 10) + 1;
	gun.y = (rand() % 10) + 1;
	gun.z = (rand() % 10) + 1;
	int i = 0;
	//cout << "weapon - z coordinate: " << gun.z << endl;
	while (gun.bullet > 0)
	{
		if (i == n_targets)
			break;
		//cout << "target: z1 coordinate: " << target[i].z1 << endl;
		//cout << "target: z2 coordinate: " << target[i].z2 << endl;
		if ((gun.z >= target[i].z1) && (gun.z <= target[i].z2)) {
			gun.shoot();
			hit_or_miss.hit++;
			i++;
			cout << "hit" << endl;
		}
		else {
			hit_or_miss.miss++;
			i++;
			cout << "miss" << endl;
		}
	}
	delete[] target;
	return hit_or_miss.hit;
}