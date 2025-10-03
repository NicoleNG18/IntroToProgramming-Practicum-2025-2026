#include<iostream>

int main(void) {

  unsigned int width, height;

  std::cin >> width >> height;

  int area = width * height;
  int perimeter = 2 * width + 2 * height;

  std::cout << "Perimeter = " << perimeter << "\nArea = " << area << std::endl;

  return 0;
}
