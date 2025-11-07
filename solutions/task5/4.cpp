#include<iostream>

int digitCount(long long n) { 

  if(n == 0) return 1;

  int count = 0;
  long long input = 0 + n;

  for(int i = 0; i < n; i ++) {
    count ++;
    input /= 10;
    if(input == 0) {
      return count;
    }
  }
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
