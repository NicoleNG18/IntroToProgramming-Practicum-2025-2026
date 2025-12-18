#include <iostream>
using namespace std;

const int SIZE_OF_ROWS = 128, SIZE_OF_COLS = 128;

void solution(int number, int matrix[][SIZE_OF_COLS], unsigned rows, unsigned cols)
{
	bool found = false;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if (number == matrix[i][j])
			{
				if (!found)
				{
					cout << "Yes" << endl;
					found = true;
				}
				matrix[i][j] *= 10;
			}
		}
	}

	if (!found)
	{
		cout << "No" << endl;
	}
}



int main()
{
	int x; 
	cout << "Enter a number: ";
	cin >> x;

	unsigned rows, cols;
	cout << "Enter tne numbers of rows and columns: ";
	cin >> rows >> cols;

	int matrix[SIZE_OF_ROWS][SIZE_OF_COLS];

	cout << "Enter elements of matrix: " << endl;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	}

	solution(x, matrix, rows, cols);

	cout << endl;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}