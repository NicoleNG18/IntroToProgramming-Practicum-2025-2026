#include<iostream>

int main(void) {
  unsigned long long _0binput; 
  unsigned long long number = 0;
  bool bit;
  unsigned long long power = 1;


  std::cin >> _0binput;

  while(_0binput > 0) {
    bit = _0binput % 10;
    _0binput /= 10;
    number += bit * power;
    //std::cout << bit << " " << power << "\n";
    power *= 2;
  }

  std::cout << number << std::endl;

}
