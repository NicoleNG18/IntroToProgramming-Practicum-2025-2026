#include<iostream>

bool isMonthValid(int m) {
  return m > 0 && m <= 12;
}

bool isYearLeap(int y) {
  return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}

int daysInMonth(int m, bool leap) {
  switch(m) {
    case 2: return (leap ? 29 : 28); break;
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
        return 31; break;
    case 4: case 6: case 9: case 11: 
        return 30; break;
  }
  return 0;
}

bool isGregorian(int d, int m, int y) {
  if(!isMonthValid(m)) return false;

  bool isLeap = isYearLeap(y);
  int mSize = daysInMonth(m, isLeap);

  return d > 0 && d <= mSize;
}

int main(void) {
  std::cout << std::boolalpha << isGregorian(29,02,2020) << std::endl;
  std::cout << std::boolalpha << isGregorian(29,13,2020) << std::endl;
  std::cout << std::boolalpha << isGregorian(29,02,2019) << std::endl;
  return 0;
}
