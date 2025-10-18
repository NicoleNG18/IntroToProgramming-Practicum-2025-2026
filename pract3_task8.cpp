

#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    int newNumber = a * 100 + b;
    std::cout << newNumber << std::endl;

    if (a%10>= (a/10)+1 || b/10>= (a%10)+1 || b%10>=(b/10)+1)
    {
        std::cout << "Yes";
    }
    else
    {
        std::cout << "No";
    }

}
// Help: При въвжедане на числа, които не съставят прогресия, отново се отпечатва Yes. 

