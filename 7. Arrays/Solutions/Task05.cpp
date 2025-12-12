#include <iostream>

const size_t SIZE_OF_ARRAY = 64;

void getArray(int arr[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        int digit;
        std::cin >> digit;
        if (digit < 0 || digit > 9) {
            std::cout << "Invalid digit, try again: ";
            i--;
        } else {
            arr[i] = digit;
        }
    }
}

void countDigits(const int arr[], size_t size, int count[]) {
    for (size_t i = 0; i < size; i++) {
        count[arr[i]]++;
    }
}

int sumOfUniqueDigits(int count[]) {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        if (count[i] == 1)
            sum += i;
    }
    return sum;
}

int main() {
    unsigned num;

    do {
        std::cout << "Enter number of digits (1-64): ";
        std::cin >> num;
    } while (num < 1 || num > SIZE_OF_ARRAY);

    int digits[SIZE_OF_ARRAY];

    std::cout << "Enter " << num << " digits [0,9]: ";
    getArray(digits, num);

    int count[10] = {0};
    countDigits(digits, num, count);

    int result = sumOfUniqueDigits(count);

    std::cout << "Sum of unique digits: " << result << std::endl;
}
