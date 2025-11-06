

#include <iostream>

int main()
{
    long long num;
    unsigned int pos;
    std::cout << "Enter number and position: ";
    std::cin >> num >> pos;

    int digits = 0;
    long long temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    if (pos < 1 || pos > digits) {
        std::cout << "Dont have digit on index " << pos << std::endl;
        return 0;
    }

    for (int i = 1; i < pos; i++) {
        num /= 10;
    }
        int res = num % 10;
        std::cout << res << std::endl;
    return 0;
}
