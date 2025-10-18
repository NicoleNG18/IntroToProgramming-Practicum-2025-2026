#include <iostream>

int main()
{
    const  double  EUR_TO_USD_RATE = 1.1;
    const   double  EUR_TO_JPY_RATE = 145.0;
    double  euros;

    std::cout << " Въведете сумата в евро: ";
    std::cin >> euros;

    std::cout << " dollars = " << euros * EUR_TO_USD_RATE << std::endl;
    std::cout << " yen = " << euros * EUR_TO_JPY_RATE << std::endl;

    return 0;

    }

