#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter two numbers between 10 and 99: ";
    std::cin >> num1 >> num2;


    if (num1 < 10 || num1 > 99 || num2 < 10 || num2 > 99) {
        std::cout << "Invalid input!" << std::endl;
    }
    else
    {

    int combined = num1 * 100 + num2; 
    std::cout << "New number: " << combined << std::endl;
    
    int units = combined % 10;
    int tens = (combined /10 ) % 10;
    int hundreds = (combined / 100 ) % 10;
    int thousands = combined / 1000;
    
    bool isIncreasing = thousands < hundreds && hundreds < tens && tens < units;

    std::cout << "Is increasing: " << (isIncreasing ? "Yes" : "No") << std::endl;
    }
}
