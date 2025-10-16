#include <iostream>
using namespace std;

int main() {
    unsigned n;
    cin >> n;

    unsigned day = n / (24 * 3600);
    n %= 24 * 3600;

    unsigned hour = n / 3600;
    n %= 3600;

    unsigned minutes = n / 60 ;

    unsigned seconds = n % 60;

    cout << day << " " << " days,  ";
    cout << hour << " " << " hours,  ";
    cout << minutes << " " << " minutes,  ";
    cout << seconds << " " << " seconds";

    return 0;
}

