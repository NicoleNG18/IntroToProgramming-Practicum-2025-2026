#include <iostream>

int main()
{
    std::cout << "Enter a number: " << std::endl;
    long long number;
    std::cin >> number;

    std::cout << "Enter position (from right to left): ";
    unsigned position;
    std::cin >> position;

    bool positionReached = false;
    while( number != 0 && position > 0)
    {
        unsigned lastDigit=number%10;
        position--;
        
        if(position==0)
        {
            std::cout << lastDigit;
            positionReached = true;
            break;
        }
         number/=10;
    }
    
    if(!positionReached)
       std::cout << "Index not present";
       
}
