

#include <iostream>

int main()
{
    unsigned int n;
    std::cout << "Enter natural number: ";
    std::cin >> n;

    if (n < 2) {
        std::cout << "not prime" << std::endl;
        return 0;
    }

    bool isPrime = true;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;           
        }
    }

    if (isPrime)
        std::cout << "prime" << std::endl;
    else
        std::cout << "not prime" << std::endl;

    return 0;
}
