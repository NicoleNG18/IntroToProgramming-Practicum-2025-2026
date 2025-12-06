#include <iostream>

const size_t SIZE_OF_ARRAY = 10;

void getArray(int arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        int num;
        do
        {
            std::cin >> num;
        } while (num < 0 || num > 127);
        arr[i] = num;
    }
}

char toChar(int num)
{
    if (num >= 32 && num <= 127)
        return num; 
    else
        return '\0';
}

void printArrayAsChars(int arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        char c = toChar(arr[i]);
        if (c != '\0')
            std::cout << c;
    }
    std::cout << std::endl;
}

int main()
{
    unsigned countOfElements;

    do {
        std::cin >> countOfElements;
    } while (countOfElements < 1 || countOfElements > SIZE_OF_ARRAY);

    int arr[SIZE_OF_ARRAY];
    getArray(arr, countOfElements);

    printArrayAsChars(arr, countOfElements);
}
