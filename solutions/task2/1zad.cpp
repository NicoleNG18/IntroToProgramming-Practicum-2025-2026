/** teoretichnite zadachi
 * 1 - 1
 * 2 - 1
 * 3 - 1
 */
#include<iostream>

int main(void) {
  int a,b;
  std::cin >> a >> b;
  
  bool is_divisor = a / b > 0;

  std::cout << std::boolalpha << is_divisor << std::endl;

  return 0;
}
