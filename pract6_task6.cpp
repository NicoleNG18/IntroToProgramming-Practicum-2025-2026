
#include <iostream>

void printDiamond(int n) 
{
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++)
        {
            std::cout << " ";
        }
        for (int a = 1; a <= 2 * i - 1; a++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++)
        {
            std::cout << " ";
        }
        for (int a = 1; a <= 2 * i - 1; a++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() 
{
    int n;
    std::cin >> n;
    printDiamond(n);

    std::cout << "..........";
}