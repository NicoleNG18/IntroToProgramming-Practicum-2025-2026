#include <iostream>
using namespace std;

int main ()
{
    int number, units, tens, hundreds, thousands;
    cout << "Please enter an integer number: ";
    cin >> number;
    thousands = number / 1000;
    hundreds = (number / 100) % 10;
    tens = (number / 10) % 10;
    units = number % 10;
    cout << boolalpha << (thousands == units && hundreds == tens) << endl;

    return 0;
}