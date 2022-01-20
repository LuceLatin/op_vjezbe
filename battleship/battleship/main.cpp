#include "Board.hpp"

int main() {
	front();
	srand(time(NULL));
	Board b;
	b.horizontally_or_vertically();
	Board copy;
	b.matrix_copy(copy); 
	int x, y;
	int i = -1, z = 0, cnt = 0, count = 20;
	Board nova;
	nova.display(); 
	vector <int> vector_x;
	vector <int> vector_y;
	while (count > 0) {
		cout << "Enter coordinates x(rows) and y(columns): " << endl;
		cin >> x >> y;
		while (x < 0 || x > 10 || y < 0 || y > 10) {
			cout << "Enter coodinates again (0-9)! " << endl;
			cin >> x >> y;
		}

		if (b.hit_or_miss(x, y) == 1) {
			z = 1;
			cnt++;
			vector_x.push_back(x);
			vector_y.push_back(y);
			i++;
			vektor(vector_x, vector_y, i);
			if (cnt == 15)
				break;
		}
		else if (b.hit_or_miss(x, y) == 2) {
			z = 2;
			vektor(vector_x, vector_y, i);
		}
		else if (b.hit_or_miss(x, y) == 3) {
			z = 3;
			vektor(vector_x, vector_y, i);
		}
		else {
			count--;
			vector_x.push_back(x);
			vector_y.push_back(y);
			i++;
			vektor(vector_x, vector_y, i);
		}

		b.new_board(nova, x, y);
		b.board(nova, x, y, count);

		if (z == 1) {
			cout << "HIT"<< endl;
			vektor(vector_x, vector_y, i);
		}
		else if (z == 2) {
			cout << "You already hit that field! Try again whit other coordinates." << endl;
			vektor(vector_x, vector_y, i);
		}
		else if (z == 3) {
			cout << "You have already tried whit these coordinates. Please try with other coordinates." << endl;
			vektor(vector_x, vector_y, i);
		}
		else {
			cout << "MISS" << endl;
			vektor(vector_x, vector_y, i);
		}
		z = 0;
	}
	copy.display();
	b.win_or_lose(cnt);
}