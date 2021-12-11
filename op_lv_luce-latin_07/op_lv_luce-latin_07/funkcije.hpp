#include <iostream>
using namespace std;

class Point {
private:
	double x, y; // gdje su x i y vrijednosti manje od dimenzije matrice.
public:
	Point(double x, double y){
		this->x = x;
		this->y = y;
	}
	int convert_x(Point& p);
	int convert_y(Point& p);

};

class Board {
private:
	int rows, columns;
	char ch;
	char** matrix;
public:
	Board(int rows, int columns, char ch='o') {
		this->rows = rows;
		this->columns = columns;
		this->ch = ch;
		create();
	}
	~Board();
	void create();
	void draw_char(Point p, char ch);
	void draw_up_line(Point p, char ch);
	void draw_line(Point point1, Point point2, char ch);
	void display()const;
};