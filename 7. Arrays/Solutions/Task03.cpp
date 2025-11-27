#include <iostream>

const size_t SIZE_OF_ARRAY = 150;

void getArray(char arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

void printArray(char arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }
}

void printNewString(char arr[], size_t size, char symbol)
{
    int counter = 0;

    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == symbol)
        {
            arr[i]= '*';
            counter++;
        }
    }

    std::cout << "Counter: " << counter << std::endl;

    std::cout << "New string: ";
    printArray(arr, size);
    std::cout << std::endl;
}

int main()
{
    unsigned countOfElements;

    do {
        std::cout << "Enter array size: ";
        std::cin >> countOfElements;
    } while (countOfElements < 1 || countOfElements > SIZE_OF_ARRAY);

    char arr[SIZE_OF_ARRAY];

    getArray(arr, countOfElements);

    std::cout << "Enter symbol: ";
    char symbol;
    std::cin >> symbol;

    printNewString(arr, countOfElements, symbol);
}
