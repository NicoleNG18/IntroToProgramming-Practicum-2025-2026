#include<iostream>

long reverse(long n) {
  int result = 0;
  while(n > 0) {
    //std::cout << n << " " << result << std::endl;
    result *= 10;
    result += n % 10;
    n /= 10;
  }

  return result;
}

long long concate(long f, long s) {
  long long result = s;
  long long p = 1;
  while(s > 0) {
    p *= 10;
    s /= 10;
  }
  while(f > 0) {
    result += (f % 10) * p;
    p *= 10;
    f /= 10;
  }

  return result;
}

long long concateWithReverse(long n) {
  long r = reverse(n);
  return concate(r, n);
}

int main(void) {
  std::cout << concateWithReverse(5678) << std::endl;
  //std::cout << reverse(5678) << std::endl;
  std::cout << concateWithReverse(100) << std::endl;
  return 0;
}
