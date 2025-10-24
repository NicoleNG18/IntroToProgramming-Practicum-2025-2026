#include <iostream>

int main()
{
    unsigned long long code;

    std::cout << "Enter code: " << std::endl;
    std::cin >> code;

    int lastDigit = code % 10;
	int preLastDigit = (code / 10) % 10;
	int prePreLastDigit = (code / 100) % 10;

    std::cout << "*****" << prePreLastDigit << preLastDigit << lastDigit;
}
