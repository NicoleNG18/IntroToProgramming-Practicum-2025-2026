

#include <iostream>

int main()
{
    unsigned long long n;
    std::cout << "Enter natural number : ";
    std::cin >> n;
    int maxDigit = 0;
    int maxCount = 0;

    for (int digit = 0; digit <= 9; digit++) {
        unsigned long long temp = n;
        int count = 0;

        while (temp > 0) {
            int currentDigit = temp % 10;
            if (currentDigit == digit) {
                count++;
            }
            temp /= 10;
        }
    
        if (count > maxCount || (count == maxCount && digit > maxDigit)) {
            maxCount = count;
            maxDigit = digit;
        }
    }
    std::cout << "Most common: " << maxDigit << std::endl;
    return 0;
}
