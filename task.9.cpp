#include <iostream>
using namespace std;

const int SIZE_OF_ROWS = 128, SIZE_OF_COLS = 128;

void printSpiral(int matrix[][SIZE_OF_COLS], unsigned rows, unsigned cols)
{
	int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

	while (top <= bottom && left <= right)
	{
		for (int j = left; j <= right; ++j)
		{
			cout << matrix[top][j] << " ";
		}
		++top;

		for (int i = top; i <= bottom; ++i)
		{
			cout << matrix[i][right] << " ";
		}
		--right;

		if (top <= bottom)
		{
			for (int j = right; j >= left; --j)
			{
				cout << matrix[bottom][j] << " ";
			}
			--bottom;
		}

		if (left <= bottom)
		{
			for (int i = bottom; i >= top; --i)
			{
				cout << matrix[i][left] << " ";
			}
			++left;
		}
	}
	cout << endl;
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

	printSpiral(matrix, rows, cols);

	return 0;
}