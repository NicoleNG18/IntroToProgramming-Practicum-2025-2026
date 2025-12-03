#include <iostream>

void getArray (int arr[], unsigned int elements) {
    for (int i = 0; i < elements; i++) {
        do {
            std::cout << "Fill the array: ";
            std::cin >> arr[i];
        } while (arr[i] < 0 || arr[i] > 9);
    }
}



int main() {
    const size_t SIZE_OF_ARRAY = 64;

    unsigned int elements;

    do {
        std::cout << "Enter how many elements: ";
        std::cin >> elements;
    } while (elements < 1 || elements > SIZE_OF_ARRAY);

    int arr[SIZE_OF_ARRAY];

getArray (arr, elements);

    int arr2[10] = {0};

    for (int i = 0; i < elements; i++) {
        unsigned int number = arr[i];
        arr2[number]++;
        }

    unsigned int sum = 0;

    for (int i = 0; i < 10; i++) {
        if (arr2[i] == 1 && arr2[i] != 0) {
            sum += arr[i];
        }
        continue;
    }
    std::cout << sum;
}