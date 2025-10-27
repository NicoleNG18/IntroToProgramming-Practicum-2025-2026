#include<iostream>

int main(void) {

  long a, b;

  std::cin >> a >> b;

  for(int i = a; i >= 1; i --) {
    if(a % i == 0 && b % i == 0) {
      std::cout << i << " ";
    }
  }
  std::cout << std::endl;
  
  return 0;
}
