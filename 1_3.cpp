/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    unsigned first, second, op;
    std::cout << "Please enter the first number " << std::endl;
    std::cin >> first;
    
    std::cout << "Please enter the second number " << std::endl;
    std::cin >> second;
    
    op = first;
    first = second;
    second = op;
    
    std::cout << "The swapped values of the first and second numbers are: the first is: " << first << ", while the second is: " << second <<std::endl;
    
    

    return 0;
}