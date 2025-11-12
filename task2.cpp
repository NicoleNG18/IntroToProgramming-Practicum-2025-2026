#include <iostream>
using namespace std;

int binaryConvert(int n) {
    int result = 0;
    int place =1;
    while (n != 0) {
        int rem = n % 2;
        result += rem * place;
        n /= 2;
        place *= 10;
    }
    return result;
}

int reverseNum(int n) {
    int reversed = 0;
    while (n != 0) {
        reversed *= 10;
        reversed += n % 10;
        n /= 10;
    }
    return reversed;
}

bool isPalindrome(int n) {
    if (n < 0) {
        return false;
    }
    n = binaryConvert(n);
    return n == reverseNum(n);
}


int main() {
    int n = 1;
    int counter = 0;
    while (counter < 20) {
        if (isPalindrome(n)) {
            cout << n << endl;
            counter++;
        }
        n++;
    }

}
