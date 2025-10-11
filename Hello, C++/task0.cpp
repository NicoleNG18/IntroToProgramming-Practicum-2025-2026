#include <iostream>

using namespace std;

int main() {
    cout << "Hello, C++" << endl;

    int appleCount, pearCount, bananaCount;

    cout << "Enter apple, pear and banana counts: ";
    cin >> appleCount >> pearCount >> bananaCount;

    cout << "Don't forget to buy " << appleCount << " apples, "
         << pearCount << " pears and " << bananaCount << " bananas!" << endl;
}