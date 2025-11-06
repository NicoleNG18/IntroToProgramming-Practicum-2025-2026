

#include <iostream>

int main()
{
    unsigned int n;
    std::cout << "Enter natural number n: ";
    std::cin >> n;

    for (unsigned int x = 1; x < n; x++) {
        unsigned int y = n - x;
                std::cout << "x = " << x << " y = " << y << std::endl;
    }
    return 0;
}
