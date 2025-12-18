#include <iostream>
using namespace std;

const int SIZE_OF_ROWS = 128, SIZE_OF_COLS = 128;

bool isTriangularMatrix(const int matrix[][SIZE_OF_COLS], unsigned rows, unsigned cols)
{
	if (rows != cols)
	{
		return false;
	}

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (matrix[i][j] != 0)
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	int rows, cols;
	cout << "Enter the numbers of rows and columns: ";
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

	cout << boolalpha << isTriangularMatrix(matrix, rows, cols);

	return  0;
}