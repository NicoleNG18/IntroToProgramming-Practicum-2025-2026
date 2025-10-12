#include<iostream>

int main(void) {
  double dist, price, before_tax;

  std::cin >> dist;

  before_tax =  (dist <= 5) * (dist * 2.5f) + (dist > 5) * (12.5f + (dist - 5) * 1.5f);
  price = before_tax * (1 + 0.1f * (before_tax > 20)) + 3;

  std::cout << price << std::endl;
  return 0;
}
