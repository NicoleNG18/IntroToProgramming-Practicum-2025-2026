#include <iostream>
using namespace std;

const int SIZE_OF_ROWS = 128, SIZE_OF_COLS = 128;

void printMainDiagonal(const int matrix[][SIZE_OF_COLS], unsigned rows, unsigned cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if (i == j)
			{
				cout << matrix[i][j] << " ";
			}
		}
	}
	cout << endl;
}

void printSecondaryDiagonal(const int matrix[][SIZE_OF_COLS], unsigned rows, unsigned cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if (i + j == cols - 1)
			{
				cout << matrix[i][j] << " ";
			}
		}
	}
	cout << endl;
}

void maxElement(const int matrix[][SIZE_OF_COLS], unsigned rows, unsigned cols)
{
	int maxElement = matrix[0][0];

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if (maxElement < matrix[i][j])
			{
				maxElement = matrix[i][j];
			}
		}
	}
	cout << maxElement << endl;
}

void minElement(const int matrix[][SIZE_OF_COLS], unsigned rows, unsigned cols)
{
	int minElement = matrix[0][0];

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if (minElement > matrix[i][j])
			{
				minElement = matrix[i][j];
			}
		}
	}
	cout << minElement << endl;
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

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	printMainDiagonal(matrix, rows, cols);
	printSecondaryDiagonal(matrix, rows, cols);
	maxElement(matrix, rows, cols);
	minElement(matrix, rows, cols);

	return 0;
}