#include <iostream>

int main() {
    int n;
    std::cin >> n;  

    std::cout << std::boolalpha << (n % 2 == 0) << std::endl;
    return 0;
}