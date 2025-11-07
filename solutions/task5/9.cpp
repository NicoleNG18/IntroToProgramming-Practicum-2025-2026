#include<iostream>

unsigned long long mixNums(unsigned long _a, unsigned long _b) {

  long a = _a, b = _b;
  unsigned long long answer = 0;

  while(a > 0 || b > 0) {
    if(a > 0) {
      answer *= 10;
      answer += a % 10;
      a /= 10;
    }
    if(b > 0) {
      answer *= 10;
      answer += b % 10;
      b /= 10;
    }
  }

  return answer;
}

int main(void) {
  std::cout << mixNums(123, 456) << std::endl;
  std::cout << mixNums(123, 45678) << std::endl;
  return 0;
}
