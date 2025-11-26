#include <iostream>
bool twoElemAreEqual(int arr[], unsigned countOfElements)
{
    for (int i = 0; i < countOfElements; i++)
    {
        unsigned currIndex = i;
        unsigned followingIndex = i + 1;

        if (arr[currIndex] == arr[followingIndex])
        {
            return true;
        }
    }
    return false;
}
void getArray(int arr[], unsigned countOfElements)
{
    for (int i = 0; i < countOfElements; i++)
    {
        std::cin >> arr[i];
    }
}
int main ()
{
    const size_t SIZE_OF_ARRAY = 500;
    unsigned countOfElements;
    do
    {
        std::cout << "Enter array : ";
        std::cin >> countOfElements;
    } while (countOfElements < 1 || countOfElements > SIZE_OF_ARRAY);

    int arr[SIZE_OF_ARRAY];

    getArray(arr, countOfElements);
    std::cout << std::boolalpha << twoElemAreEqual(arr, countOfElements);
}