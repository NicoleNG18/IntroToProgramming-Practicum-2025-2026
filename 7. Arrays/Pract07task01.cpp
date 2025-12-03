#include <iostream>

void getArray (int arr[], unsigned int countOfElements) {
std::cout << "Enter numbers to fill the array: ";
    for (int i = 0; i < countOfElements; i++) {
        std::cin >> arr[i];
    }
}

bool EqualElements (int arr[], unsigned int countOfElements) {
    for (int i = 0; i < countOfElements; i++) {
        if (arr[i] == arr[i + 1]) {
            return true;
        }
    }
    return false;
}

int main() {
    const size_t SIZE_OF_ARRAY = 500;

    unsigned int countOfElements;

    do {
        std::cout << "Enter number of elements: ";
        std::cin >> countOfElements;
    } while (countOfElements < 1 || countOfElements > SIZE_OF_ARRAY);

int arr[SIZE_OF_ARRAY];

getArray (arr, countOfElements);

    std::cout << std::boolalpha << EqualElements (arr, countOfElements);

}