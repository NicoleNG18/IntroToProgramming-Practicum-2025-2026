#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    unsigned last_digit = n%10;
    unsigned last_digit2 = (n/10) % 10;
    unsigned last_digit3 = (n/100) % 10;
    unsigned last_digit4 = (n/1000) % 10;

    cout<<boolalpha<<((last_digit==last_digit4)&&
        (last_digit2==last_digit3));

}
