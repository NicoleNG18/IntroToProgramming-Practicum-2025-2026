#include <iostream>
using namespace std;

const int SIZE_OF_ROWS = 128, SIZE_OF_COLS = 128;

bool isMagicSquare(const int matrix[][SIZE_OF_COLS], unsigned rows, unsigned cols)
{
	if (rows != cols)
	{
		return false;
	}

	int referenceSum = 0;

	for(int j = 0; j < cols; ++j) // sum of first row
	{
		referenceSum += matrix[0][j];
	}

	for (int i = 1; i < rows; ++i)
	{
		int rowSum = 0;
		
		for (int j = 0; j < cols; ++j)
		{
			rowSum += matrix[i][j];
		}

		if (rowSum != referenceSum)
		{
			return false;
		}
	}

	for (int j = 0; j < cols; ++j)
	{
		int colSum = 0;

		for (int i = 0; i < rows; ++i)
		{
			colSum += matrix[i][j];
		}

		if (colSum != referenceSum)
		{
			return false;
		}
	}

	int mainDiagonal = 0;

	for (int i = 0; i < rows; ++i)
	{
		mainDiagonal += matrix[i][i];
	}

	if (mainDiagonal != referenceSum)
	{
		return false;
	}

	int secondaryDiagonal = 0;

	for (int i = 0; i < rows; ++i)
	{
		secondaryDiagonal += matrix[i][rows - 1 - i];
	}

	if (secondaryDiagonal != referenceSum)
	{
		return false;
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

	cout << boolalpha << isMagicSquare(matrix, rows, cols);

	return 0;
}

