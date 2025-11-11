#include<iostream>

int digitCount(long long n) { 
  int count = 0;

  do {
    count ++;
  }while((input /= 10) > 0);

  return count;
}

int main(void) {
  int o1 = digitCount(78965735);
  int o2 = digitCount(78);
  int o3 = digitCount(0);
  int o4 = digitCount(1);

  std::cout << o1 << std::endl;
  std::cout << o2 << std::endl;
  std::cout << o3 << std::endl;
  std::cout << o4 << std::endl;

  return 0;
}
