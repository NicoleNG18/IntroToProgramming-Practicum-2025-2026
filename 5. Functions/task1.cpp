#include <iostream>

using namespace std;

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

bool isUpper(char c) {
    return c >= 'A' && c <= 'Z';
}

bool isLower(char c) {
    return c >= 'a' && c <= 'z';
}

bool isAlpha(char c) {
    return isUpper(c) || isLower(c);
}

bool isAlnum(char c) {
    return isAlpha(c) || isDigit(c);
}

char capitalize(char c) {
    return isLower(c) ? (char)(c - ('a' - 'A')) : c;
}

char makeLower(char c) {
    return isUpper(c) ? (char)(c + ('a' - 'A')) : c;
}

int parseInt(char c) {
    return isDigit(c) ? (c - '0') : -1;
}

char toChar(int digit) {
    return (digit >= 0 && digit <= 9) ? (char)('0' + digit) : '\0';
}

// assumevam che tursim celochislen logaritum
int myLog(int argument, int base) {
    if (argument < 1 || base < 2) {
        return -1;
    }

    int value = 1;
    int exponent = 0;

    while (value < argument) {
        value *= base;
        exponent++;
    }

    if (value == argument) {
        return exponent;
    } else {
        return -1;
    }
}

double myAbs(double value) {
    return value >= 0 ? value : -value;
}

double myPow(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        int value = 1;

        for (int i = 0; i < myAbs(exponent); i++) {
            value *= base;
        }

        return exponent > 0 ? value : (1.0 / value);
    }
}

int myCeil(double value) {
    return (int)value / 1 + 1;
}

int myFloor(double value) {
    return (int)value / 1;
}

int main() {
    cout << boolalpha << "Is 5 digit: " << isDigit('5') << endl;
    cout << boolalpha << "Is @ digit: " << isDigit('@') << endl << endl;

    cout << boolalpha << "Is G uppercase: " << isUpper('G') << endl;
    cout << boolalpha << "Is p uppercase: " << isUpper('p') << endl << endl;

    cout << boolalpha << "Is t lowercase: " << isLower('t') << endl;
    cout << boolalpha << "Is Z lowercase: " << isLower('Z') << endl << endl;

    cout << boolalpha << "Is R a letter: " << isAlpha('R') << endl;
    cout << boolalpha << "Is { a letter: " << isAlpha('{') << endl << endl;

    cout << boolalpha << "Is 4 alphanumeric: " << isAlnum('4') << endl;
    cout << boolalpha << "Is . alphanumeric: " << isAlnum('.') << endl << endl;

    cout << "d Capitalized: " << capitalize('d') << endl;
    cout << "Y to lowercase: " << makeLower('Y') << endl;
    cout << "'5' parsed to int: " << parseInt(5) << endl;
    cout << "6 turned into char: " << toChar('6') << endl;
    cout << "log5(625) = " << myLog(625, 5) << endl;
    cout << "4^3 = " << myPow(4, 3) << endl;
    cout << "1.12 ceiled: " << myCeil(1.12) << endl;
    cout << "2.54 floored: " << myFloor(2.54) << endl;
    cout << "Absolute value of -3.7: " << myAbs(3.7) << endl;
}