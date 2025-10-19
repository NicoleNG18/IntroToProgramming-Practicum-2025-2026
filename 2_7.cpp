#include <iostream>
#include <Cmath>
using namespace std;

int main ()
{
    int number;
    cout << "Please enter an integer number." << endl;
    cin >> number;

    //variant 1  number = abs(number); 
    // variant 2
    (number > 0)? number : number = -number;
    cout << "The absolute value of the number is " << number << endl;



    return 0;
}