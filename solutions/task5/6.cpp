#include<iostream>

bool haveSameRadius(
  long x1,
  long y1,
  long x2,
  long y2
) {
  return x1 * x1 + y1 * y1 == x2 * x2 + y2 * y2;
}

int main(void) {
  std::cout << (haveSameRadius(2, 5, 4, 5) ? "yes" : "no") << std::endl;
  std::cout << (haveSameRadius(3, 4, -3, -4) ? "yes" : "no") << std::endl;
  return 0;
}
