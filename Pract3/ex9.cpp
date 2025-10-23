#include <iostream>
using namespace std;


int main()
{
    int a, x, y;
    cin >> a;
    cin >> x, y;

    int col = x / a;
    int row = y / a;

    if ((row + col) % 2 == 0)
        cout << "black";
    else
        cout << "white";

    return 0;
}
