#include<iostream>

long long nthFib(int n) {
  
  long long prev = 1, last = 1;

  for(int i = 2; i < n; i ++) {
    last = last + prev;
    prev = last - prev;
  }

  return last;
}

int main(void) {
  std::cout << nthFib(5) << std::endl;
  std::cout << nthFib(7) << std::endl;
  std::cout << nthFib(3) << std::endl;
  return 0;
}
