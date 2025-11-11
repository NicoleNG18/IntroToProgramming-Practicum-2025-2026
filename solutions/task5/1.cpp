#include<iostream>

long long toBinary(long num) {

  long ans = 0;

  long runningPow = 1;

  bool isNeg = num < 0;

  if(isNeg) {
    num *= -1;
  }

  while(num > 0) {
    ans += runningPow * (num % 2);
    runningPow *= 10;
    num /= 2;
  }

  return ans * (isNeg ? -1 : 1);
}

int main(void) {
  std::cout << toBinary(15) << std::endl;
  std::cout << toBinary(-16) << std::endl;
  return 0;
}

