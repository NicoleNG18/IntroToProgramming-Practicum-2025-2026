#include <iostream>

const size_t SIZE_OF_ARRAY = 16;

void getArray(int arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int getArrayGCD(int arr[], size_t size)
{
    int result = arr[0];

    for (size_t i = 1; i < size; i++)
    {
        result = gcd(result, arr[i]);
    }

    return result;
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

    std::cout << getArrayGCD(arr, countOfElements);
}
