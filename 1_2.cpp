/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    unsigned euros, dollars, yen;
    std::cout << "Please enter amount of euros. " << std::endl;
    std::cin >> euros;
    
    dollars = euros*1.1;
    yen = euros*145;
    
    std::cout << euros << "€ is the equivalent of: " << dollars << "$, or: " << yen << "¥." << std::endl;
    
    

    return 0;
}