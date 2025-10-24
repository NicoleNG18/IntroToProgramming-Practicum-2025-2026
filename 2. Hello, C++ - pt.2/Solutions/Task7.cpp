#include <iostream>

int main() {
    int num;
    
    std::cout<< "Enter number: " << std::endl;
    std::cin >> num;

    std::cout << "Abs of number: " << (num>0)*num + (num<0)*(-num) << std::endl;
}
