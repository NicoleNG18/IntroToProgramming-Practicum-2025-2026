#include <iostream>
using namespace std;

void draw(int n) {
    int totalRows = 2*n-1;
    int stars;
    int spaces;
    for (int i = 1; i <= totalRows; i++) {
        if (i<=n) {
            stars = 2*i-1;
            spaces = n-i;
        }
        else {
            stars = 2 * (totalRows - i + 1) - 1;
            spaces = i-n;
        }
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    draw(n);
    return 0;

}
