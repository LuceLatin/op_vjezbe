#include "point.hpp"
#include "target.hpp"

int main()
{
	//ZADATAK 1
	//setting
	Pointposition point;
	point.set_0();
	point.print_xyz();
	//random
	Pointposition point_random;
	int a, b;
	cout << "Enter interval: " << endl;
	cin >> a >> b;
	point_random.set_random(a, b);
	//print
	cout << "Coordinates of point are: " << endl;
	point_random.print_xyz();
	//get
	Pointposition point_1;
	cout << "Enter coordinates of first point:" << endl;
	point_1.get_xyz();
	Pointposition point_2;
	cout << "Enter coordinates of second point:" << endl;
	point_2.get_xyz();
	//2D
	cout << "Distance between two points (2D): " << point_1.distance2D(point_1, point_2) << endl;
	//3D
	cout << "Distance between two points (3D): " << point_1.distance3D(point_1, point_2) << endl;

	//ZADATAK 
	//cout << "Number of hits: " << hit_miss();

}