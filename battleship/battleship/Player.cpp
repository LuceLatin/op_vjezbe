#include "Board.hpp"

int Board::hit_or_miss(int x, int y)
{
	if (matrix[x][y] == 'H')
		return 1;
	else if (matrix[x][y] == '+')
		return 2;
	else if (matrix[x][y] == '*')
		return 3;
	else
		return 0;
}

void Board::win_or_lose(int count)
{
	if (count == 15)
		cout << "You win!" << endl;
	else
		cout << "Game over. You lose. Try again!" << endl;
}


void Board::new_board(Board& nova, int x, int y)
{
	if (hit_or_miss(x, y) == 1)
		matrix[x][y] = '+';
	else if (hit_or_miss(x, y) == 0)
		matrix[x][y] = '*';
}


void Board::print_board(int count)const
{
	system("CLS");
	system("Color 07");
	cout << "  0 1 2 3 4 5 6 7 8 9" << endl;
	for (int i = 0; i < rows; i++) {
		cout << i << " ";
		for (int j = 0; j < columns; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Lives: " << count << endl;
}

void Board::board(Board& nova, int x, int y, int count)
{
	if (hit_or_miss(x, y) == 2)
		nova.matrix[x][y] = '+';
	else if (hit_or_miss(x, y) == 3)
		nova.matrix[x][y] = '*';
	nova.print_board(count);
}

void vektor(vector<int> vector_x, vector<int> vector_y, int& i)
{
	cout << "Tries: ";
	for (int j = 0; j <= i; j++) {
		cout << vector_x[j] << "-" << vector_y[j] << " ";
	}
	cout << endl;
}

void Board::matrix_copy(Board& copy)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			copy.matrix[i][j] = matrix[i][j];
		}
	}
}