#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int u, t, h, sum_num;
    u = n%10;
    t = (n/10)%10;
    h = (n/100)%10;
    sum_num = u+t+h;
    cout<<"units = "<<u << endl;
    cout<<"tens = "<<t<<endl;
    cout<<"hundreds = "<<h<<endl;
    cout<<"sum = "<<sum_num<<endl;


}
