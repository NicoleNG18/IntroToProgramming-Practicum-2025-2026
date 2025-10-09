#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int p = a*b;
    int last_digit = p%10;
    cout<<"Prod: "<<p<<endl;
    cout<<"Last digit: "<<last_digit<<endl;
    cout<<"Is odd: "<< boolalpha <<(p%2!=0)<<endl;
}
