#include <iostream>
int main () {

    int firstS, secondS, thirdS;
    std::cin >> firstS >> secondS >> thirdS;

    if ( firstS < secondS + thirdS && secondS < firstS + thirdS
        && thirdS < firstS + secondS) {
        std::cout << "yes";
    }
    else {
        std::cout << "no";
    }
}