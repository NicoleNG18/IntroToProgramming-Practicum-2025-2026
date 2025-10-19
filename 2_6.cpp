#include <iostream>
using namespace std;

int main() 
{
    int number1, number2, number3, combined_number;
    
    cout << "Please enter value of first number." << endl;
    cin >> number1;
    cout << "Please enter value of second number." << endl;
    cin >> number2;
    cout << "Please enter value of third number." << endl;
    cin >> number3;

    combined_number = number1*100 + number2*10 + number3;

    cout << "The combined number is: " << combined_number << endl;
    
    return 0;
}