#include<iostream>

int main(void) {

  unsigned month, day_count;

  std::cin >> month;

  if(month == 2) {
    unsigned year;

    std::cin >> year;

    bool isLeap = (!(year % 4) && (year % 100)) || !(year % 400);

    day_count = 28 + isLeap;
  }else if(month <= 7) {
    day_count = month % 2 == 0 ? 30 : 31;
  }else {
    day_count = month % 2 == 0 ? 31 : 30;
  }

  std::cout << day_count << std::endl;

  return 0;
}
