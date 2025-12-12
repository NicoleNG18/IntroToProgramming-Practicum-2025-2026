#include <iostream>

const size_t SIZE_OF_ARRAY = 500;

void getArray(int arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

bool areTwoConsecutive(int arr[], size_t size)
{
    for (size_t i = 0; i < size-1; i++)
    {
        if(arr[i] == arr[i+1])
        return true;
    }
    return false;
}


int main()
{
    unsigned countOfElements;

    do {
        std::cout << "Enter array size: ";
        std::cin >> countOfElements;
    } while (countOfElements < 1 || countOfElements > SIZE_OF_ARRAY);

    int arr[SIZE_OF_ARRAY];

    getArray(arr, countOfElements);
   
    std::cout << std::boolalpha << areTwoConsecutive(arr, countOfElements);
}
