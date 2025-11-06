

#include <iostream>

int main()
{
    unsigned long long n;
    std::cout << "Enter natural number : ";
    std::cin >> n;
    int count[10] = { 0 };

    while (n > 0) {
        int digit = n % 10; 
        count[digit]++;
        n /= 10;     
    }

    int maxDigit = 0;
    int maxCount = count[0];

    for (int i = 1; i <= 9; i++) {
        if (count[i] > maxCount || (count[i] == maxCount && i > maxDigit)) {
            maxCount = count[i];
            maxDigit = i;
        }
    }
        std::cout << "Most common: " << maxDigit << std::endl;
        return 0;
}
