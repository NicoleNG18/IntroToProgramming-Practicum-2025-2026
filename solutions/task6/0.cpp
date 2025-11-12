#include<iostream>


// bez masivi shte skladirame chislata v callstaka i shte boli
long long nthFib(int n) {
  
  if(n == 1 || n == 2) return 1;

  return nthFib(n - 1) + nthFib(n - 2);
}

int main(void) {
  std::cout << nthFib(5) << std::endl;
  std::cout << nthFib(7) << std::endl;
  std::cout << nthFib(3) << std::endl;
  return 0;
}
