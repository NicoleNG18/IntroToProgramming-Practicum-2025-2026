#include<iostream>

int main(void) {

  int a, b, c, d;

  std::cin >> a >> b >> c >> d;

  bool do_intersect = a <=d && c <= b;

  std::cout << std::boolalpha << do_intersect << std::endl;

  return 0;
}
