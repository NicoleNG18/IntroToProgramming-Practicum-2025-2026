#include <iostream>

int main()
{
    unsigned x,y,side;
    std::cin >> side >> x >> y;
    
    if(( x / side) % 2 == ( y / side) % 2)
        std::cout << "black";
    else
        std::cout << "white";

}