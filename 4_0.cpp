#include <iostream>

int main () 
{
    unsigned Number;
    std::cout << "Please enter a positive integer." << std::endl;
    std::cin >> Number;
    for (int i = 1; i <= Number; i++) {
        std::cout << std::endl;
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
    }
    return 0;
}