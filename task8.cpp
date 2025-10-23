#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;

    int new_num = a*100 + b;

    int d1 = new_num/1000;
    int d2 = (new_num%1000)/100;
    int d3 = (new_num%100)/10;
    int d4 = new_num%10;

    bool is_increasing = (d2 > d1) && (d3 > d2) && (d4 > d3);

    cout<<new_num<<" - ";
    if (is_increasing) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;

}