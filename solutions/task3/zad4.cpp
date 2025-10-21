#include<iostream>

int main(void) {
  double a, b, c;
  
  std::cin >> a >> b >> c;

  bool isTriangle = true;

  if(a <= 0 || b <= 0 || c <= 0){
    isTriangle = false;
  }

  if(a + b <= c || a + c <= b || b + c <= a) {
    isTriangle = false;
  }

  std::cout << (isTriangle ? "yes" : "no") << std::endl;

  return 0;
}
