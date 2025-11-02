#include <iostream>

int main () {
    unsigned Number;
    bool IsPrime = true;
    std::cout << "Please enter a positive integer." << std::endl;
    std::cin >> Number;

    for (int i = 2; i < (Number/2); i++) {
        if (Number % i == 0) IsPrime = false;
    }
    if (IsPrime = true ) {
        std::cout << "The entered number is prime" << std::endl;
    }
        else std::cout << "The entered number is not prime" << std::endl;



    return 0;
}