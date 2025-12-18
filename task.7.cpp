#include <iostream>
using namespace std;

const int SIZE_OF_ROWS = 128, SIZE_OF_COLS = 128;

void multiplication(const int matrix1[][SIZE_OF_COLS], const int matrix2[][SIZE_OF_COLS], unsigned rows1, unsigned cols1, unsigned rows2, unsigned cols2)
{
	if (cols1 != rows2)
	{
		cout << "Matrix multiplication isn't possible";
	}

	int C[SIZE_OF_ROWS][SIZE_OF_COLS] = { 0 };

	for (int i = 0; i < rows1; ++i)
	{
		for (int j = 0; j < cols2; ++j)
		{
			for (int k = 0; k < cols1; ++k)
			{
				C[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}

	cout << "Result matrix C (" << rows1 << "x" << cols2 << "): " << endl;

	for (int i = 0; i < rows1; ++i)
	{
		for (int j = 0; j < cols2; ++j)
		{
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	unsigned rows1, cols1;
	cout << "Enter tne numbers of rows and columns for matrix1: ";
	cin >> rows1 >> cols1;

	int matrix_1[SIZE_OF_ROWS][SIZE_OF_COLS];

	cout << "Enter elements of matrix 1: " << endl;

	for (int i = 0; i < rows1; ++i)
	{
		for (int j = 0; j < cols1; ++j)
		{
			cin >> matrix_1[i][j];
		}
	}

	unsigned rows2, cols2;
	cout << "Enter tne numbers of rows and columns for matrix2: ";
	cin >> rows2 >> cols2;

	int matrix_2[SIZE_OF_ROWS][SIZE_OF_COLS];

	cout << "Enter elements of matrix 2: " << endl;

	for (int i = 0; i < rows2; ++i)
	{
		for (int j = 0; j < cols2; ++j)
		{
			cin >> matrix_2[i][j];
		}
	}

	multiplication(matrix_1, matrix_2, rows1, cols1, rows2, cols2);

	return 0;
}