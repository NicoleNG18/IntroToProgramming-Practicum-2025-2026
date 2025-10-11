/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    unsigned apples, pears, bananas;
    std::cout << "Please enter number of apples. " << std::endl;
    std::cin >> apples;
    
    std::cout << "Please enter number of pears. " << std::endl;
    std::cin >> pears;
    
    std::cout << "Please enter number of bananas. " << std::endl;
    std::cin >> bananas;
    
    
    std::cout<<"Don't forget to buy " << apples << " apples, " << pears << " pears and " << bananas << " bananas! " << std::endl;

    return 0;
}