#include <iostream>
using namespace std;

int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    cout<< boolalpha <<(!(b1 < a2 || b2 < a1)) << endl;
}
