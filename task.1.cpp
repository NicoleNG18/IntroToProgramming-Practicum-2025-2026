#include <iostream>
using namespace std;

const int SIZE_OF_ROWS = 128, SIZE_OF_COLS = 128;

void sumMatrix(int matrix_1[][SIZE_OF_COLS], int matrix_2[][SIZE_OF_COLS], unsigned rows, unsigned cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			int sum = matrix_1[i][j] + matrix_2[i][j];
			cout << sum << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void subtractMatrix(int matrix_1[][SIZE_OF_COLS], int matrix_2[][SIZE_OF_COLS], unsigned rows, unsigned cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			int subtract = matrix_1[i][j] - matrix_2[i][j];
			cout << subtract << " ";
		}
		cout << endl;
	}
}

int main()
{
	unsigned rows, cols;
	cout << "Enter tne numbers of rows and columns: ";
	cin >> rows >> cols;

	int matrix_1[SIZE_OF_ROWS][SIZE_OF_COLS];
	int matrix_2[SIZE_OF_ROWS][SIZE_OF_COLS];

	cout << "Enter elements of matrix 1: " << endl;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cin >> matrix_1[i][j];
		}
	}

	cout << "Enter elements of matrix 2: " << endl;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cin >> matrix_2[i][j];
		}
	}

	sumMatrix(matrix_1, matrix_2, rows, cols);
	subtractMatrix(matrix_1, matrix_2, rows, cols);

	return 0;
}