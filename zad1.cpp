#include <iostream>

bool isDigit(char c) { return c >= '0' && c <= '9'; }
bool isUpper(char c) { return c >= 'A' && c <= 'Z'; }
bool isLower(char c) { return c >= 'a' && c <= 'z'; }
bool isAlpha(char c) { return isUpper(c) || isLower(c); }
bool isAlnum(char c) { return isDigit(c) || isAlpha(c); }
char capitalize(char c) {
    if (!isLower(c)) {
        return c;
    }
    return c + ('A' - 'a');
}
char makeLower(char c) {
    if (!isUpper(c)) {
        return c;
    }
    return c - ('a' - 'A');
}
int parseInt(char c) {
    if (c >= '0' && c <= '9'){
        return c - '0';
}
    return -1;
}
char toChar(int n) {
    if (n >= 0 && n <= 9) {
        return n + '0';
    }
    return '\0';
}
double myLog(int num, int base) {
    if (num <= 0 || base <= 1) return -1;
    double result = 0;
    double value = 1;
    while (value * base <= num) {
        value *= base;
        result++;
    }
    return result;
}
int myPow(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) result *= base;
    return result;
}
int myCeil(double x) {
    int i = (int)x;
    return (x > i) ? i + 1 : i;
}
int myFloor(double x) {
    return (int)x;
}
int myAbs(int x) {
    return (x < 0) ? -x : x;
}



int main() {
    char c;
    std::cout << "Enter character: ";
    std::cin >> c;
    std::cout << "isDigit: " << isDigit(c) << std::endl;
    std::cout << "isUpper: " << isUpper(c) << std::endl;
    std::cout << "isLower: " << isLower(c) << std::endl;
    std::cout << "isAlpha: " << isAlpha(c) << std::endl;
    std::cout << "isAlnum: " << isAlnum(c) << std::endl;
    std::cout << std::endl;
    std::cout << "capitalize: " << capitalize(c) << std::endl;
    std::cout << "makeLower: " << makeLower(c) << std::endl;
    std::cout << "parseInt: " << parseInt(c) << std::endl;
    std::cout << std::endl;

    int n;
    std::cout << "Enter number 0-9: ";
    std::cin >> n;
    std::cout << "toChar: " << toChar(n) << std::endl;
    std::cout << std::endl;

    int base, num;
    std::cout << "Enter number and base for myLog: ";
    std::cin >> num >> base;
    std::cout << "myLog: " << myLog(num, base) << std::endl;
    std::cout << std::endl;

    double val;
    std::cout << "Enter decimal number for myCeil/myFloor: ";
    std::cin >> val;
    std::cout << "myCeil: " << myCeil(val) << std::endl;
    std::cout << "myFloor: " << myFloor(val) << std::endl;
    std::cout << std::endl;

    int x;
    std::cout << "Enter number for myAbs/myPow: ";
    std::cin >> x;
    int exp;
    std::cout << "Enter exponent for myPow: ";
    std::cin >> exp;
    std::cout << "myAbs: " << myAbs(x) << std::endl;
    std::cout << "myPow: " << myPow(x, exp) << std::endl;

    return 0;
}
