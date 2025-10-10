#include<iostream>

int main(void) {
  
  unsigned int num1, num2;

  std::cin >> num1 >> num2;

  int prod = num1 * num2, last_digit = prod % 10;
  bool is_odd = last_digit % 2;

  std::cout << "Product: " << prod << std::endl;
  std::cout << "Last digit: " << last_digit << std::endl;
  std::cout << std::boolalpha << "Is odd: " << is_odd << std::endl;

  return 0;
}
