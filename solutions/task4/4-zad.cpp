#include<iostream>

int main(void) {

  unsigned int a, b, q, r;

  std::cin >> a >> b;

  do {
    r = a % b;
    q = a / b;
    a = b;
    b = r;
    //std::cout << a << "=" << q << "x" << b << " " << r << "\n";
  }while(r != 0);

  std::cout << a << std::endl;

  return 0;
}
