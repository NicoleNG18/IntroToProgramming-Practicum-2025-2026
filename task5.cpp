#include <iostream>
using namespace std;

int main() {
    //task 5
    int x,y;
    cin>>x>>y;
    if (x > 0 and y > 0) {
        cout<<"First";
    }
    else if (x < 0 and y > 0) {
        cout<<"Second";
    }
    else if (x < 0 and y < 0) {
        cout<<"Third";
    }
    else if (x > 0 and y < 0) {
        cout<<"Forth";
    }
    else {
        cout<<"On axis";
    }
}
