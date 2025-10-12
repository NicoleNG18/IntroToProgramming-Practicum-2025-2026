#include<iostream>

int main(void) {
  int number, reversed;

  std::cin >> number;

  bool is_palindrome = 
    ((number / 1000) == number % 10)
    && ((number / 10) % 10 == (number / 100) % 10);

  std::cout << std::boolalpha << is_palindrome << std::endl;
  return 0;
}
