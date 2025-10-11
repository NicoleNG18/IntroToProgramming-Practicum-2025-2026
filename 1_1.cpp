/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    unsigned length, width;
    std::cout << "Please enter length. " << std::endl;
    std::cin >> length;
    
    std::cout << "Please enter width. " << std::endl;
    std::cin >> width;
    
    unsigned p = 2*(length + width);
    unsigned s = length*width;
    
    std::cout<< "Area = " << s << ", while the perimeter is: " << p << std::endl;
    
    

    return 0;
}