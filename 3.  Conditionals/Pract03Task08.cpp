#include <iostream>

int main () {

    int firstNumber, secondNumber;
    std::cin >> firstNumber >> secondNumber;

    int newNumber = firstNumber * 100 + secondNumber;

    int units = newNumber % 10;
    int tens = (newNumber / 10) % 10;
    int hundreds = (newNumber / 100) % 10;
    int thousands = newNumber / 1000;

    std::cout << newNumber << " - " <<
        (units > tens && tens > hundreds && hundreds > thousands ? "YES" : "NO");

}