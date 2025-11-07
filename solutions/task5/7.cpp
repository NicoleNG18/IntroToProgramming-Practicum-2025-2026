#include<iostream>

long long square(int x) {
  return x * x;
}

long sumOfSquares(int n) {
  long sum = 0;
  for(int i = 1; i <= n; i ++) {
    sum += square(i);
  }
  return sum;
}

int main(void) {
  std::cout << sumOfSquares(3) << std::endl;
  std::cout << sumOfSquares(5) << std::endl;
  std::cout << sumOfSquares(7) << std::endl;
  std::cout << sumOfSquares(0) << std::endl;
  return 0;
}
