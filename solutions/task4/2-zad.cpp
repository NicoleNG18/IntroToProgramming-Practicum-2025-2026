#include<iostream>


int main(void) {

  unsigned n;
  bool isPrime = true;

  std::cin >> n;

  if(n == 1 || n == 0) {
    isPrime = false;
  }else {
    for(int i = 2; i <= n / 2; i ++) {
      if(!(n % i)) {
        isPrime = false;
        break;
      }
    }
  }


  std::cout << (isPrime ? "prime" : "not prime") << std::endl;

  return 0;
}
