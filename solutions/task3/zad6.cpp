#include<iostream>

int main(void) {
  double x, y;
  std::cin >> x >> y;

  if(x == 0 || y == 0) {
    std::cout << "On the axis" << std::endl;
  }

  if(x < 0 && y < 0) {
    std::cout << "Third" << std::endl;
  }
  if(x < 0 && y > 0) {
    std::cout << "Second" << std::endl;
  }
  if(x > 0 && y < 0) {
    std::cout << "Fourth" << std::endl;
  }
  if(x > 0 && y > 0) {
    std::cout << "First" << std::endl;
  }
  return 0;
}
