#include<iostream>

void toBinary(long num) {
  if(num > 0) {
    toBinary(num / 2);
    std::cout << num % 2;
  }
}

int main(void) {
  long n;

  std::cin >> n;

  toBinary(n);

  std::cout << std::endl;
  return 0;
}

