#include <iostream>
using namespace std;

const int SIZE_OF_ROWS = 128, SIZE_OF_COLS = 128;

void transpose(int matrix[][SIZE_OF_COLS], unsigned rows, unsigned cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = i + 1; j < cols; ++j)
		{
			int temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}
}

void reverseRows(int matrix[][SIZE_OF_COLS], unsigned rows, unsigned cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols / 2; ++j)
		{
			int temp = matrix[i][j];
			matrix[i][j] = matrix[i][cols - 1 - j];
			matrix[i][cols - 1 - j] = temp;
		}
	}
}

void rotate90Clockwise(int matrix[][SIZE_OF_COLS], unsigned rows, unsigned cols)
{
	transpose(matrix, rows, cols);
	reverseRows(matrix, rows, cols);
}

int main()
{
	unsigned rows, cols;
	cout << "Enter the number of rows and columns: ";
	cin >> rows >> cols;

	int matrix[SIZE_OF_ROWS][SIZE_OF_COLS];

	cout << "Enter elements of matrix: " << endl;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cin >> matrix[i][j];
		}
	}

	cout << endl;

	rotate90Clockwise(matrix, rows, cols);

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}