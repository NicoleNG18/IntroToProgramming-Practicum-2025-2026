#include<iostream>

int main(void) {
  unsigned year;

  std::cin >> year;

  bool isLeap = (!(year % 4) && (year % 100)) || !(year % 400);

  std::cout << (isLeap ? "yes" : "no") << std::endl;

  return 0;
}
