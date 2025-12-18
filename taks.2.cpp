#include <iostream>
using namespace std;

const int SIZE_OF_ROWS = 128, SIZE_OF_COLS = 128;

void transpose(int matrix[][SIZE_OF_COLS], unsigned rows, unsigned cols)
{
	if (rows != cols)
	{
		cout << "The matrix cannot be transposed!";
	}

	int temp;

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

	transpose(matrix, rows, cols);

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