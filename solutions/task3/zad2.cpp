#include<iostream>

int main(void) {

  int a, b, x;

  std::cin >> x >> a >> b;

  bool isInInterval = a <= x && b >= x;

  std::cout << std::boolalpha << isInInterval << std::endl;
  return 0;
}
