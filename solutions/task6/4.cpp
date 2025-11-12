#include<iostream>

long sumOfDivisors(long n) {
  int result = 0;

  for(int i = 1; i <= n / 2; i ++) {
    if(n % i == 0) {
      result += i;
    }
  }
  return result;
}

bool isPerfect(long n) {
  return n == sumOfDivisors(n);
}


int main(void) {
  std::cout << "6: " << std::boolalpha << isPerfect(6) << std::endl;
  std::cout << "7: " << std::boolalpha << isPerfect(7) << std::endl;
  std::cout << "25: " << std::boolalpha << isPerfect(25) << std::endl;
  std::cout << "28: " << std::boolalpha << isPerfect(28) << std::endl;
  return 0;
}
