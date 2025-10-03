#include<iostream>

int main(void) {
  int num1, num2, buffer;

  std::cin >> num1 >> num2;

  buffer = num1;
  num1 = num2;
  num2 = buffer;

  std::cout << "first = " << num1 << std::endl;
  std::cout << "second = " << num2 << std::endl;

  return 0;
}
