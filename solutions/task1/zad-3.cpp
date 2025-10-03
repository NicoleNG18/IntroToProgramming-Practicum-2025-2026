#include<iostream>

int main(void) {
  double inputAmount;

  std::cin >> inputAmount;

  std::cout << "dollars = " << inputAmount * 1.1f << std::endl;
  std::cout << "yen = " << inputAmount * 145 << std::endl;

  return 0;
}
