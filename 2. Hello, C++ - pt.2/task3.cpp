#include <iostream>

using namespace std;

int main() {
    double a, b, c, d;

    cout << "Enter two intervals ([a,b] and [c,d] | a < b and c < d): ";
    cin >> a >> b >> c >> d;


    cout << boolalpha << (b >= c && a <= d) << endl;
}