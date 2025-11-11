#include <iostream>

int calcDigitCount(long long digit) {
  int count = 0;

  do {
    count ++;
  }while((digit /= 10) > 0);

  return count;
}

short calcMaxDigit(long long num) {
  short maxDigit = 0;
  while (num > 0) {
    int d = num % 10;
    if (d > maxDigit) maxDigit = d;
    num /= 10;
  }
  return maxDigit;
}

long long removeDigitFromNumber(long long num, short digit) {
  long long newN = 0, pow10 = 1;
  bool removed = false;
  while (num > 0) {
    int d = num % 10;
    num /= 10;
    if (d == digit && !removed) {
      removed = true;
      continue;
    }
    newN += d * pow10;
    pow10 *= 10;
  }
  return newN;
}

long long appendDigit(long long n, short digit) {
  return n * 10 + digit;
}

long long sortDigits(long long n) {
    long long result = 0;
    long long multiplier = 1;

    int digitCount = calcDigitCount(n);

    for (int i = 0; i < digitCount; i++) {
      long long maxDigit = calcMaxDigit(n);
      n = removeDigitFromNumber(n, maxDigit);
      result = appendDigit(result, maxDigit);
    }

    return result;
}

int main() {
    long long n = 463211;
    long long n1 = 758701732;
    std::cout << sortDigits(n) << std::endl;
    std::cout << sortDigits(n1) << std::endl;
}

