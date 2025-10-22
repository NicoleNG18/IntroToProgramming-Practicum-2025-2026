#include <iostream>

int main() {
    int first, second, third; 
    
    std::cout<< "Enter three digits: " << std::endl;
    std::cin >> first >> second >> third;

    int newNumber = first * 100 + second * 10 + third;

    std::cout << "New number: " << newNumber << std::endl;
}
