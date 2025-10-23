#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int combined = a * 100 + b;
    int d1 = combined / 1000;
    int d2 = (combined / 100) % 10;
    int d3 = (combined / 10) % 10;
    int d4 = combined % 10;

    cout << combined << " - ";
    if (d2 - d1 >= 1 && d3 - d2 >= 1 && d4 - d3 >= 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
