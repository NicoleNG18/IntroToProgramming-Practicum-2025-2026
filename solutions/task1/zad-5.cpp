#include<iostream>

int main(void) {

  unsigned int in, units, tens, hundreds, sum;

  std::cin >> in;

  units = in % 10;
  tens = ((in - units) / 10) % 10;
  hundreds = ( in - tens - units ) / 100;
  sum = units + tens + hundreds;

  std::cout << "units = " << units << std::endl;
  std::cout << "tens = " << tens << std::endl;
  std::cout << "hundreds = " << hundreds << std::endl;
  std::cout << "sum = " << sum << std::endl;

  return 0;
}
