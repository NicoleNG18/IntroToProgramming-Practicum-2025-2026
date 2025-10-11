#include <iostream> 

int main()
{
    int number;
    std::cout << "Please enter a number: " << std::endl;
    std::cin>>number;

    std::cout << std::boolalpha << (number % 2 == 0) << std::endl;

    return 0;
}