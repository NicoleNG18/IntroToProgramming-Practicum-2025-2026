#include <iostream>

int main() {
    int first, second;
    
    std::cout<< "Enter two numbers: "<< std::endl;
    std::cin >> first >> second;

    std::cout << "Is divisor: " << std::boolalpha << (first != 0 && second % first == 0) << std::endl;
}
