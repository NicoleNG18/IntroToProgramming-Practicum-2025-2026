#include <iostream>

const int MAX_SIZE = 128;

void readMatrix(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> arr[i][j];
		}
	}
}

void printMatrix(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}


//EX:00
//void printMainDiagonal(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols)
//{
//	for (size_t i = 0; i < rows; i++)
//	{				
//		std::cout << arr[i][i] << " ";		
//	}
//	std::cout << std::endl;
//}
//
//void printSeconDiagonal(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols)
//{
//	for (size_t i = 0; i < rows; i++)
//	{
//		std::cout << arr[i][cols - i - 1] << " ";
//	}
//	std::cout << std::endl;
//}
//
//int maxValue(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols)
//{
//	int maxVal = arr[0][0];
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < cols; j++)
//		{
//			if (maxVal < arr[i][j])
//			{
//				maxVal = arr[i][j];
//			}
//		}
//	}
//
//	return maxVal;
//}
//
//int minValue(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols)
//{
//	int minVal = arr[0][0];
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < cols; j++)
//		{
//			if (minVal > arr[i][j])
//			{
//				minVal = arr[i][j];
//			}
//		}
//	}
//
//	return minVal;
//}
//int main()
//{
//	int rows, cols;
//	std::cin >> rows >> cols;;
//
//	int arr[MAX_SIZE][MAX_SIZE];
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < cols; j++)
//		{
//			std::cin >> arr[i][j];
//		}
//	}
//	std::cout << std::endl;
//
//	printMainDiagonal(arr, rows, cols);
//	printSeconDiagonal(arr, rows, cols);
//	std::cout << maxValue(arr, rows, cols) << std::endl;
//	std::cout << minValue(arr, rows, cols) << std::endl;
//	return 0;
//}

//EX:01
//void cinMatrix(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols)
//{
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < cols; j++)
//		{
//			std::cin >> arr[i][j];
//		}
//	}
//}
//
//void coutMatrix(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols)
//{
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < cols; j++)
//		{
//			std::cout << arr[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//	
//}
//
//void Calculate(char symbol, int arr1[MAX_SIZE][MAX_SIZE], int arr2[MAX_SIZE][MAX_SIZE], int rows, int cols)
//{
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < cols; j++)
//		{
//			if (symbol == '+')
//			{
//				std::cout << arr1[i][j] + arr2[i][j];
//			}
//			else if (symbol == '-')
//			{
//				std::cout << arr1[i][j] - arr2[i][j];
//			}
//			
//		}
//		std::cout << std::endl;
//	}	
//}
//
//
//
//int main()
//{
//	int rows, cols;
//	std::cin >> rows >> cols;
//
//	int arr1[MAX_SIZE][MAX_SIZE];
//	int arr2[MAX_SIZE][MAX_SIZE];
//	cinMatrix(arr1, rows, cols);
//	std::cout << std::endl;
//	cinMatrix(arr2, rows, cols);
//	std::cout << std::endl;
//	coutMatrix(arr1, rows, cols);
//	coutMatrix(arr2, rows, cols);
//	Calculate('+', arr1, arr2, rows, cols);
//	return 0;
//}

//EX:02
//int main()
//{
//	int rows, cols;
//	std::cin >> rows >> cols;
//
//	int arr[MAX_SIZE][MAX_SIZE];
//
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < cols; j++)
//		{
//			std::cin >> arr[i][j];
//		}
//	}
//	std::cout << std::endl;
//
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < cols; j++)
//		{
//			std::cout << arr[j][i] << " ";
//		}
//		std::cout << std::endl;
//	}
//	return 0;
//}

//EX:03
//void findNum(int num, int arr[MAX_SIZE][MAX_SIZE], int rows, int cols)
//{
//	bool flag = false;
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < cols; j++)
//		{
//			if (num == arr[i][j])
//			{
//				arr[i][j] *= 10;
//				flag = true;
//			}
//			std::cout << arr[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//	if (!flag)
//	{
//		std::cout << "NO" << std::endl;
//	}
//}
//
//int main()
//{
//	int num;
//	std::cin >> num;
//	int rows, cols;
//	std::cin >> rows >> cols;
//
//	int arr[MAX_SIZE][MAX_SIZE];
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < cols; j++)
//		{
//			std::cin >> arr[i][j];
//		}
//	}
//
//	findNum(num, arr, rows, cols);
//	return 0;
//}

//EX:04
//bool isSimetric(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols)
//{
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < cols; j++)
//		{
//			if (arr[i][j] != arr[j][i])
//			{
//				return false;
//			}
//
//		}
//
//	}
//	return true;
//}
//
//int main()
//{
//	int rows, cols;
//	std::cin >> rows >> cols;
//	int arr[MAX_SIZE][MAX_SIZE];
//	readMatrix(arr, rows, cols);
//
//	std::cout << isSimetric(arr, rows, cols);
//	
//
//	return 0;
//}

//EX:05
//bool isTriangleMatrix(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols)
//{
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < cols; j++)
//		{
//			if (i > j && arr[i][j] != 0)
//			{
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	int rows, cols;
//	std::cin >> rows >> cols;
//
//	int arr[MAX_SIZE][MAX_SIZE];
//	readMatrix(arr, rows, cols);
//
//	std::cout << isTriangleMatrix(arr, rows, cols);
//	return 0;
//}
//

//EX:06 //ne e zavurshena 

//bool areRowsSumEqual(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols) {
//	int sumRow = -1;
//	for (size_t i = 0; i < rows; i++)
//	{
//		int currRowSum = 0;
//		for (size_t j = 0; j < cols; j++)
//		{
//			currRowSum += arr[i][j];
//			if (sumRow == -1)
//			{
//				sumRow = currRowSum;
//			}else if()
//		}
//	}
//
//}
//
//bool isMagical(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols)
//{
//	bool areRowsEqual = false;
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < cols; j++)
//		{
//
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	int rows, cols;
//	std::cin >> rows >> cols;
//	
//	int arr[MAX_SIZE][MAX_SIZE];
//	readMatrix(arr, rows, cols);
//
//	return 0;
//}