#include <iostream>

long long toBinary(unsigned number) {
    long long result = 0;
    long long base = 1;

    while (number > 0) {
        result += (number % 2) * base;
        base *= 10;
        number /= 2;
    }

    return result;
}

void printLongestRow(long long binaryNum) {
    unsigned short maxBit;
    unsigned short maxCount = 0;

    unsigned short currCount = 1;
    unsigned short currBit = binaryNum % 10;
    binaryNum /= 10;

    while (binaryNum > 0) {
        unsigned short lastDigit = binaryNum % 10;

        if (lastDigit == currBit) {
            currCount++;
        } else {

            if (currCount > maxCount) {
                maxCount = currCount;
                maxBit = currBit;
            }

            currCount = 1;
            currBit = lastDigit;
        }
        binaryNum /= 10;
    }

    if (currCount > maxCount) {
        maxCount = currCount;
        maxBit = currBit;
    }

    std::cout << maxBit << " -> " << maxCount << std::endl;
}

int main() {

    unsigned number;

    do {
        std::cout << "Enter number: ";
        std::cin >> number;
    } while (number < 100 || number > 999);

    long long binaryNumber = toBinary(number);
    printLongestRow(binaryNumber);
}