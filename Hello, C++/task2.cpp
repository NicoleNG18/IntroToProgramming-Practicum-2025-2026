#include <iostream>

using namespace std;

int main() {
    double euro;

    cout << "Enter amount in euro: ";
    cin >> euro;

    cout << "dollars = " << (euro * 1.1) << endl;
    cout << "yens = " << (euro * 145) << endl;
}