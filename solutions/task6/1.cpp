#include<iostream>

long long fact(int n) {
  if(n < 0) {
    std::cout << "Negative factoriel not defined in R" << std::endl;
    return 0;
  }
  long long r = 1;
  while(n > 1) {
    r *= n;
    n --;
  }
  return r;
}

int main(void) {
  std::cout << fact(-1) << std::endl;
  std::cout << fact(0) << std::endl;
  std::cout << fact(1) << std::endl;
  std::cout << fact(2) << std::endl;
  std::cout << fact(3) << std::endl;
  std::cout << fact(4) << std::endl;
  std::cout << fact(5) << std::endl;
  return 0;
}
