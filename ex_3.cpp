#include <iostream>
using namespace std;

const unsigned SIZE_OF_ARRAY = 150;

void finalResult(char arr[], char symbol)
{
	int counter = 0;

	for (int i = 0; arr[i] != '\0'; ++i)
	{
		if (arr[i] == symbol)
		{
			arr[i] = '*';
			counter++;
		}
	}
	cout << "Count: " << counter << endl;
	cout << "NewString: " << arr;
}

int main()
{
	char arr[SIZE_OF_ARRAY];

	cin.getline(arr, SIZE_OF_ARRAY);

	char symbol;
	cin >> symbol;

	finalResult(arr, symbol);

	return 0;
}