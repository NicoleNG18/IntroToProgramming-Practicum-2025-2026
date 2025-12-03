#include <iostream>

void getArray (int arr[], unsigned countOfElements) {
    std::cout << "Enter values: ";
    for (int i = 0; i < countOfElements; i++) {
        std::cin >> arr[i];
    }
}

void printArray (int arr[], unsigned countOfElments) {
    std::cout << "Your array contains: ";
for (int i = 0; i < countOfElments; i++) {
    std::cout << arr[i] << " ";
}
}

int main() {
    const size_t SIZE_OFARRAY = 100;

    unsigned countOfElements;

    do {
        std::cout << "Enter number of elements: ";
        std::cin >> countOfElements;
    } while (countOfElements < 1 || countOfElements > SIZE_OFARRAY);

    int arr[SIZE_OFARRAY];

    getArray (arr, countOfElements);

    printArray (arr, countOfElements);

}