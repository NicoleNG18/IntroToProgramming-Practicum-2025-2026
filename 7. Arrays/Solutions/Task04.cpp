#include <iostream>

const size_t SIZE_OF_ARRAY = 128;

void getArray(int arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

bool isZigZag(int arr[], size_t size)
{

    for (size_t i = 0; i < size - 1; i++)
    {
        if (i % 2 == 0) {
            if (!(arr[i] < arr[i+1]))
                return false;
        } else {
            if (!(arr[i] > arr[i+1]))
                return false;
        }
    }
    return true;
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
   
    std::cout << std::boolalpha << isZigZag(arr, countOfElements);
}
