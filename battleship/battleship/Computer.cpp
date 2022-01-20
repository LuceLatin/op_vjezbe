#include "Board.hpp"

void Board::create() 
{
	matrix = new char* [rows];
	for (int i = 0; i < rows; i++) {
		matrix[i] = new char[columns];
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
				matrix[i][j] = '-';
		}
	}
} 

void Board::display()const 
{
	cout << "  0 1 2 3 4 5 6 7 8 9" << endl;
	for (int i = 0; i < rows; i++) {
		cout << i << " ";
		for (int j = 0; j < columns; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void Board::horizontally_or_vertically()
{
	for (int i = 1; i <= 5; i++) {
		int choice = rand() % 2;
		if (choice == 0) 
			put_horizontally(i);
		else
			put_vertically(i);
	}
}

bool Board::free_horizontally(int random_row, int random_column, int size_of_boat)
{
	if (columns - random_column > size_of_boat) {
		for (int i = random_column; i < random_column + size_of_boat; i++) {
			if (matrix[random_row][i] != '-')
				return false;
		}
		return true;
	}
	return false;
}

bool Board::free_vertically(int random_row, int random_column, int size_of_boat)
{
	if (rows - random_row > size_of_boat) {
		for (int i = random_row; i < random_row + size_of_boat; i++) {
			if (matrix[i][random_column] != '-')
				return false;
		}
		return true;
	}
	return false;
}

void random(int& random_row, int& random_column)
{
	random_row = rand() % 10;
	random_column = rand() % 10;
}

void Board::put_horizontally(int size_of_boat)
{
	int random_row, random_column;
	random(random_row, random_column);

	
	while (free_horizontally(random_row, random_column, size_of_boat) == false) {
		random(random_row, random_column);
	}
	for (int i = 0; i < size_of_boat; i++) {
		matrix[random_row][random_column] = 'H';
		random_column++;
	}
}


void Board::put_vertically(int size_of_boat)
{
	int random_row, random_column;
	random(random_row, random_column);
	
	while (free_vertically(random_row, random_column, size_of_boat) == false) {
		random(random_row, random_column);
	}
	for (int i = 0; i < size_of_boat; i++) {
		matrix[random_row][random_column] = 'H';
		random_row++;
	}
	
}
