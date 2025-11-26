#include <iostream>
const size_t SIZE_OF_ARRAY = 100;
void getArray(int arr[], int countOfElements)
{
    for (size_t i = 0; i < countOfElements; i++)
        std::cin >> arr[i];
}
void printArray(int arr[], int countOfElements)
{
    for (size_t i = 0; i < countOfElements; i++)
        std::cout << arr[i] << ' ';
}
int main()
{
    unsigned countOfElements;

    do{
        std::cout<< "Enter array: " << std::endl;
        std::cin >> countOfElements;
    } while(countOfElements < 1 || countOfElements > SIZE_OF_ARRAY);

    int arr[SIZE_OF_ARRAY];

    getArray(arr, countOfElements);

    printArray(arr, countOfElements);
}
