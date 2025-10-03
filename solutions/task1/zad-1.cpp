#include<iostream>

int main(void) {
  std::cout << "Hello, C++" << std::endl;

  unsigned int apple_cnt, pear_cnt, banana_cnt;

  std::cin >> apple_cnt >> pear_cnt >> banana_cnt;

  std::cout << "Dont forget to buy " <<
    apple_cnt << " apples, " <<
    pear_cnt << " pears, and " <<
    banana_cnt << " bananas!" << std::endl;

  return 0;
}
