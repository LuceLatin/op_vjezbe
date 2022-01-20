#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <cctype>
#include <cstring>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

class Board {
private:
	const int rows = 10;
	const int columns = 10;
	char** matrix;
public:
	Board() { create(); }
	~Board() {
		for (int i = 0; i < rows; i++)
			delete[] matrix[i];
		delete[] matrix;
	}
	void create();
	void display()const;
	void put_horizontally(int size_of_boat);
	void put_vertically(int size_of_boat);
	void horizontally_or_vertically();
	bool free_horizontally(int random_row, int random_column, int size_of_boat);
	bool free_vertically(int random_row, int random_column, int size_of_boat);
	int hit_or_miss(int x, int y);
	void win_or_lose(int count);
	void new_board(Board &nova, int x, int y);
	void board(Board &nova, int x, int y, int count);
	void print_board(int count) const;
	void matrix_copy(Board& copy);
};
void front();
void random(int& random_row, int& random_column);
void vektor(vector<int> vector_x, vector<int> vector_y, int &i);