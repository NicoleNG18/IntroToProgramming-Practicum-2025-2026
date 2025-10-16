#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    unsigned km;
    cin >> km;
    bool isBiggerThan5  = (km>5);
    float finalTax = (km*2.5) - (isBiggerThan5*(km-5)*1.0);

    bool isMoreThan20 = (finalTax > 20.0);
    float totalTax  = finalTax * 0.10 * isMoreThan20 + finalTax + 3.0;

    cout << totalTax;

}