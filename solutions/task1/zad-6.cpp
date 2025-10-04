#include<iostream>

int main(void) {
  int in;

  std::cin >> in;

  bool is_even = in % 2 == 0;

  std::cout << std::boolalpha << is_even << std::endl;

  return 0;
}
