#include <iostream>
size_t MAX_SIZE = 128;
void getArray(int arr[], unsigned num) {
    for (size_t i = 0; i < num; i++) {
        std::cin >> arr[i];
    }
}
bool isZigZag(int arr[], unsigned num) {
    getArray(arr, num);

    for (size_t i = 0; i < num; i++) {
        for (size_t j = i + 1; j < num; j++) {
            if (arr[i] > arr[j] && arr[i + 1] > arr[j + 1]) {
                return false;
            }
            if (arr[i] < arr[j] && arr[i + 1] > arr[j + 1]) {
                return true;
            }
        }
    }
    return false;
}
int main () {
    unsigned number;

    do {
        std::cout << "Enter a number: ";
        std::cin >> number;
    } while (number < 1 || number > MAX_SIZE);

    int arr[MAX_SIZE];

    std::cout << std::boolalpha << isZigZag(arr, number);
}