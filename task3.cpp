#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"first = "<<a<<endl;
    cout<<"second = "<<b<<endl;
}
