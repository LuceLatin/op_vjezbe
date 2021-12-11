#ifndef FUNKCIJE_HPP
#define FUNKCIJE_HPP
#include "funkcije.hpp"

Board::~Board() {
	for (int i = 0; i < rows; i++)
		delete[] matrix[i];
	delete[] matrix;
}

void Board::create(){
	matrix = new char* [rows]; 
	for (int i = 0; i < rows; i++){
		matrix[i] = new char[columns]; 
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (i == 0 || j == 0 || i == rows - 1 || j == columns - 1) {
				matrix[i][j] = ch;
			}
			else {
				matrix[i][j] = ' ';
			}
		}
	}
}
/*� Napi�ite member funkciju draw_char koja za to�ku p i znak ch postavlja znak ch na odgovaraju�em mjestu u matrici Ako koordinate to�ke p nisu
cjelobrojne, zaokru�ite ih na najbli�u cjelobrojnu vrijednost.*/
int Point::convert_x(Point& p){ // double u int
	return (int)p.x;
}

int Point::convert_y(Point& p){
	return (int)p.y;
}

void Board::draw_char(Point p, char ch) {
	matrix[p.convert_x(p)][p.convert_y(p)] = ch;
}

/*� Napi�ite member funkciju draw_up_line koja po�ev�i od to�ke p postavlja znak ch na svim poljima koja predstavljaju okomitu liniju prema
gore.*/
void Board::draw_up_line(Point point, char ch) {
	int x = point.convert_x(point);
	int y = point.convert_y(point);
	for (int i = x; i > 0; i--) {
		matrix[i][y] = ch;
	}
}

/*Napi�ite member funkciju draw_line koja za dvije to�ke p1 i p2 postavlja
znak ch na svim poljima koje predstavljaju liniju izme�u te dvije to�ke.*/
void Board::draw_line(Point point1, Point point2, char ch) {
	int point_1x = point1.convert_x(point1);
	int point_1y = point1.convert_y(point1);
	int point_2x = point2.convert_x(point2);
	int point_2y = point2.convert_y(point2);
	matrix[point_2x][point_2y] = ch;
	while (point_1x != point_2x || point_1y != point_2y) {
		matrix[point_1x][point_1y] = ch;
		if (point_1x > point_2x) {
			point_1x = point_2x+1;
			if (point_1y > point_2y) 
				point_1y = point_2y+1;
			else if (point_2y > point_1y) 
				point_1y = point_2y-1;
		}
		else if (point_2x > point_1x) {
			point_1x = point_1x+1;
			if (point_1y > point_2y)
				point_1y -= point_1y-1;
			else if (point_2y > point_1y) 
				point_1y = point_1y+1;
		}
		else {
			if (point_1y > point_2y) 
				point_1y = point_1y-1;
			else if (point_2y > point_1y) 
				point_1y = point_1y+1;
		}
	}
}

//ispis trenutnog stanja Boarda
void Board::display()const {
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < columns; j++){
			cout << matrix[i][j];
		}
		cout << endl;
	}
}

#endif