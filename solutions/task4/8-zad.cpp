#include<iostream>

int main(void) {

  unsigned long n;

  std::cin >> n;

  for(int i = 1; i < n; i ++){
    std::cout << "x = " << i << "; y = " << n - i << std::endl;
  }

  return 0;
}
