#include <iostream>
void getArray(char arr[], unsigned input) {
    for (size_t i = 0; i < input; i++) {
        std::cin >> arr[i];
    }
}
bool isBalanced(char arr[], unsigned input) {
    int sizeOfstack = 0;

    getArray(arr, input);

    for (size_t i = 0; i < input; i++) {
        if (arr[i] == '(') {
            sizeOfstack++;
        }
        else if (arr[i] == ')') {
            if (sizeOfstack == 0) {
                return false;
            }
            sizeOfstack--;
        }
    }
    return sizeOfstack == 0;
}
int main () {
    unsigned input;
    do {
        std::cout << "Enter array: ";
        std::cin >> input;
    } while (input < 1 || input > 30);

    const size_t SIZE_OF_ARRAY = 30;
    char arr[SIZE_OF_ARRAY + 1];

    std::cout << std::boolalpha << isBalanced(arr, input);
}