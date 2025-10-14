

#include <iostream>

int main()
{
    unsigned int distance;
    double tax, finalTax;
    std::cout << "Distance: ";
    std::cin >> distance;

    tax = (distance <= 5) * (distance * 2.5) + (distance > 5) * ((distance - 5) * 1.5 + 5 * 2.5);

    finalTax = ((tax >= 20) * (tax * 0.1 + tax)) + (tax < 20) * tax + 3;

    std::cout << finalTax;

}
