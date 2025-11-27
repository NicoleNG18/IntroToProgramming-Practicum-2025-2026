#include <iostream>

const size_t MAX_SIZE = 128;

void getArray(int arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

unsigned long long compressToNumber(const int arr[], size_t size)
{
    unsigned long long result = 0;

    size_t i = 0;
    while (i < size)
    {
        int current = arr[i];
        int count = 1;

        while (i + 1 < size && arr[i + 1] == current)
        {
            count++;
            i++;
        }

        result = result * 10 + current;
        result = result * 10 + count;

        i++;
    }

    return result;
}

int main()
{
    unsigned n;
    do {
        std::cout << "Enter n (1 <= n <= 128): ";
        std::cin >> n;
    } while (n < 1 || n > MAX_SIZE);

    int arr[MAX_SIZE];
    getArray(arr, n);

    std::cout << compressToNumber(arr, n);
}
