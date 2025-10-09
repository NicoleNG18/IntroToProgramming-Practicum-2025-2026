

#include <iostream>

int main()
{
    int number;

    std::cout << " Въведете положително трицифрено число: ";
    std::cin >> number;

    int hundreds = number / 100;
    int tens = (number % 100);
    int units = number % 10;
    int sum = hundreds + tens + units;

    std::cout << " Първа цифра (стотици): " << hundreds << "\n";
    std::cout << " Втора цифра (десетици): " << tens << "\n";
    std::cout << " Трета цифра (единици): " << units << "\n";
    std::cout << " Сумата на цифрите е: " << sum << "\n";

    return 0;
}

