#include <iostream>

void getArray (int arr[], unsigned int elements) {
    for (int i = 0; i < elements; i++) {
        std::cout << "Fill the array ";
        std::cin >> arr[i];
    }
}

void PrintInversions (int arr[], unsigned int elements) {
    unsigned int inversions = 0;

    for (int i = 0; i < elements - 1; i++) {
        for (int j = i + 1; j < elements; j++) {
            if (arr[i] > arr[j]) {
                inversions++;
            }
        }
    }
    std::cout<< "Inversions: " <<  inversions;
}

int main() {
    const size_t SIZE_OF_ARRAY = 256;

    unsigned int elements;

    do {
        std::cout << "Enter number of elements: ";
        std::cin >> elements;
    } while (elements < 1 || elements > SIZE_OF_ARRAY);

int arr[SIZE_OF_ARRAY];

    getArray (arr, elements );
    PrintInversions (arr, elements);
}