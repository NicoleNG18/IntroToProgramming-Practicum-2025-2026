#include<iostream>

#define LOG_ACCURACY 10000
/*<b>1.</b> Напишете следните функции, избирайки подходящи тип на връщане и аргументи:
- isDigit - връща дали даден символ е цифра
- isUpper - връща дали даден символ е голяма буква
- isLower - връща дали даден символ е малка буква
- isAlpha - връща дали даден символ е буква
- isAlnum - връща дали даден символ е цифра или буква
- capitalize - връща съответната главна буква на дадена малка буква (*бележка:* при символ, който не е буква, върнете самия символ)
- makeLower - връща съответната малка буква на дадена главна буква (*бележка:* при символ, който не е буква, върнете самия символ)
- parseInt - превръща символ в числовата му стойност - например, ако въведете '9', функцията трябва да върне числото 9 (*бележка:* при символ, който не е цифра, върнете -1)
- toChar - превръща число в символ (*бележка*: ако числото не може да бъде превърнато в символ, върнете '\0')
- myLog - логаритъм с произволна основа (*бележка:* числото и основата могат да са само естествени числа. Валидирайте входа си!)
- myPow - степенуване (*бележка:* степените могат да бъдат само цели числа)
- myCeil - закръгляне на дробно число нагоре
- myFloor - закръгляне на дробно число надолу
- myAbs - абсолютна стойност*/

bool isDigit(char c) {
  return c >= 48 && c <= 57;
}

bool isUpper(char c) {
  return c >= 65 && c <= 90;
}

bool isLower(char c) {
  return c >= 97 && c <= 122;
}

bool isAlpha(char c) { 
  return isUpper(c) && isLower(c);
}

bool isAlnum(char c) {
  return isAlpha(c) && isDigit(c);
}

char capitalize(char c) {
  if(!isAlpha(c) || isUpper(c)) {
    return c;
  }

  return c + 32;
}

char makeLower(char c) {
  if(!isAlpha(c) || isLower(c)) {
    return c;
  }

  return c - 32;
}

int parseInt(char c) {
  if(!isDigit(c)) {
    return -1;
  }

  return c - 48;
}


char toChar(int n) {
  if(n < 0 && n > 9) {
    return '\0';
  }

  return n + 48;
}



unsigned long myLog(unsigned long base, unsigned long val) {
  if(val < base || val == 0 || base == 1) {
    std::cout << "Undefined behavior" << std::endl;
    return 0;
  }

  if(val == 1) {
  }

  unsigned long testVal = base;

  for(int i = 0; i < val; i ++) {
    //std::cout << testVal << " " << val << '\n';
    if(testVal == val) {
      return i + 1;
    }
    if(testVal > val) {
      std::cout << "Logarithm isn't a whole number" << std::endl;
      return 0;
    }

    testVal *= base;
  }

  std::cout << "Unreachable" << std::endl;
  return 0;
}

double myPow(double base, int pow) {

  if(pow < 0) {
    std::cout << "Undefined behavior" << std::endl;
    return 0;
  }

  double out = 1;

  for(int i = 0; i < pow; i ++ ){
    out *= base;
  }

  return out;
}

long myCeil(double n) {
  return (long)(n+1);
}

long myFloor(double n) {
  return (long)(n);
}

long long myAbs(long long n) {
  if(n < 0) {
    return n * (-1);
  }
  return n;
}
