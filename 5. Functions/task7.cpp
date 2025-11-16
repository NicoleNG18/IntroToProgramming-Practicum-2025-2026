#include <iostream>

using namespace std;

void specialNums(unsigned int m, unsigned int n) {
    bool anyResults = false;

    for (unsigned i = m; i <= n; i++) {
        if (i >= 1000 && i <= 9999) {
            unsigned int withoutHundreds = i % 100 + i / 1000 * 100;

            if (withoutHundreds % 11 == 0) {
                anyResults = true;
                cout << i << " ";
            }
        }
    }

    if (!anyResults) {
        cout << "No such a number!";
    }

    cout << endl;
}

int main() {
    specialNums(1000, 1200);
    specialNums(2000, 2008);
}