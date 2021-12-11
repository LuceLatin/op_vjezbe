#ifndef FUNKCIJE_HPP
#define FUNKCIJE_HPP
#include "funkcije.hpp"

int main() {
	Point p1(2, 2), p2(8, 8), p3(8, 2), p4(8, 16);
	Board b(10, 20);
	b.draw_line(p1, p2, 'x');
	b.draw_line(p3, p4, 'x');
	b.display();
}

#endif