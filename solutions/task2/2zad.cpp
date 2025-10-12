#include<iostream>

int main(void) {
  int input;
  std::cin >> input;
  int last_digit = input % 10;
  std::cout << last_digit << std::endl;
  return 0;
}
