#include <iostream>

const size_t SIZE_OF_ARRAY = 30;

void getArray(char arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

bool isOpeningBracket(char ch)
{
    return ch == '(';
}

bool isClosingBracket(char ch)
{
    return ch == ')';
}

bool areBalanced(const char arr[], size_t size)
{
    int counter = 0;

    for (size_t i = 0; i < size; i++)
    {
        if (isOpeningBracket(arr[i]))
            counter++;
        else if (isClosingBracket(arr[i]))
            counter--;

        if (counter < 0)
            return false;
    }

    return counter == 0;
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
   
    std::cout << std::boolalpha << areBalanced(arr, countOfElements);
}
