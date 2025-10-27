#include<iostream>

int main(void) {
  unsigned long n;

  std::cin >> n;

  for(int i = 0; i < n; i ++) {
    for(int j = 0; j < n; j ++){
      if(j < i) {
        std::cout << "-";
      }
      if(j == i) {
        std::cout << "0";
      }
      if(j > i) {
        std::cout << "+";
      }
    }
    std::cout << "\n";
  }

  std::cout << std::endl;

  return 0;
}
