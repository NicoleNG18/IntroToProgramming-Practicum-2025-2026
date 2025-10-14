#include <iostream>

int main()
{
    int a, b;
    int c, d;

 
    std::cin >> a >> b;
    std::cin >> c >> d;
    
    if ((c > a && c < b) || (d<b || d>c))
        std::cout << "True" << std::endl;

    else
        std::cout << "False";
    // help
    
}