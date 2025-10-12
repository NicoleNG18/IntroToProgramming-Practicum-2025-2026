#include<iostream>

int main(void) {
  int hundreds, tens, units;

  std::cin >> hundreds >> tens >> units;
  
  int number = hundreds * 100
             + tens * 10
             + units;
  std::cout << number << std::endl;
  return 0;
}
