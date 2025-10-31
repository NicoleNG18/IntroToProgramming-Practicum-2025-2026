#include <iostream>

using namespace std;

int main() {
    unsigned int distance;

    cout << "Enter a distance in kms: ";
    cin >> distance;

    double fare = ((distance < 5) * distance + (distance >= 5) * 5) * 2.5 +
                  (distance > 5) * (distance - 5) * 1.5;

    fare = (1 + (fare > 20) * 0.1) * fare + 3;

    cout << fare << endl;
}