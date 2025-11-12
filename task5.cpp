#include <iostream>
using namespace std;

int reverseNum(int n) {
    int reversed = 0;
    while (n != 0) {
        reversed *= 10;
        reversed += n % 10;
        n /= 10;
    }
    return reversed;
}

int concatReverse(int n) {
    int reversed = reverseNum(n);
    int temp = n;

   while (temp != 0) {
       reversed = reversed * 10;
       temp/=10;
   }
    return reversed + n;

}

int main() {
    int n;
    cin >> n;
    cout << concatReverse(n) << endl;
    return 0;

}