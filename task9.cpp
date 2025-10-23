#include <iostream>
using namespace std;
int main() {
    int a,x,y;
    cin>>a>>x>>y;

    if (x < 0 || y < 0) {
        cout << "invalid input" << endl;
        return 0;
    }

    int C = x/a;
    int R = y/a;

    if ((C+R)%2 == 0) {
        cout<<"black";
    }
    else {
        cout<<"white";
    }

}
