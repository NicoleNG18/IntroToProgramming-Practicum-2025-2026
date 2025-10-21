#include<iostream>

int main(void) {

  double a, b;

  std::cin >> a >> b;

  double bigger = a < b ? b : a;

  std::cout << bigger << std::endl;

  return 0;
}
