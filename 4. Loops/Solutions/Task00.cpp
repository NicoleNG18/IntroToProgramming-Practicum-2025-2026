#include <iostream>

int main()
{
    std::cout << "Enter positive number: " << std::endl;
    
    unsigned number;
    std::cin >> number;
    
    for(unsigned i = 1;i <= number;i++)
    {
        for(unsigned j=1;j<=i;j++)
        {
            std::cout<<"$";
        }
        std::cout<<std::endl;
    }
}
