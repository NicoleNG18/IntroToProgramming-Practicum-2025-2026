#include <iostream>
using namespace std;

const int SIZE_OF_ROWS = 128, SIZE_OF_COLS = 128;

bool isSymmetrical(const int matrix[][SIZE_OF_COLS], unsigned rows, unsigned cols)
{
	if (rows != cols)
	{
		return false;
	}

	for (int i = 0; i < rows; ++i)
	{
		for (int j = i + 1; j < cols; ++j)
		{
			if (matrix[i][j] != matrix[j][i])
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	unsigned rows, cols;
	cout << "Enter tne numbers of rows and columns: ";
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

	if (isSymmetrical(matrix, rows, cols))
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;
}