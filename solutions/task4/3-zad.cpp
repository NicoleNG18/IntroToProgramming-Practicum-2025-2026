#include<iostream>

int main(void) {
  unsigned long long number;
  unsigned short target;

  std::cin >> number;
  std::cin >> target;

  for(int i = 0; i < target - 1; i ++) {
    number /= 10;
  }

  if(number == 0) {
    std::cout << "No number @ " << target << std::endl;
  }else {
    std::cout << number % 10 << std::endl;
  }


  return 0;
}
