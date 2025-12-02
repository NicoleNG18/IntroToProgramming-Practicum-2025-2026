#include <iostream>

void getArray (int arr[], unsigned int elementsOfArray) {
    std::cout << "Fill the array whith " << elementsOfArray << " elements ";
    for (int i = 0; i < elementsOfArray; i++) {
        std::cin >> arr[i];
    }
}

bool isZigZag (int arr[], unsigned int elementsOfArray) {
    for (int i = 0; i < elementsOfArray - 3; i = i + 2) {
        if (arr[i] > arr[i + 1] || arr[i + 1] < arr[i + 2]) {
            return false;
        }
    }
    return true;
}

int main() {
    const size_t SIZE_OF_ARRAY = 128;

    unsigned int elementsOfArray;

    do {
    std::cout << "Enter elements of the array: ";
    std::cin >> elementsOfArray;
} while (elementsOfArray < 1 || elementsOfArray > SIZE_OF_ARRAY);

    int arr[SIZE_OF_ARRAY];

    getArray (arr, elementsOfArray);

    std::cout << std::boolalpha << isZigZag (arr, elementsOfArray);
}