#include<iostream>

int main(void) {
  int in;

  std::cin >> in;

  bool is_even = (in + 1) % 2;

  std::cout << std::boolalpha << is_even << std::endl;

  return 0;
}
