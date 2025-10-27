#include<iostream>

int main(void) {
  int n;

  std::cin >> n;

  for(int i = 0; i < n; i ++) {
    for(int j = 0; j < i + 1; j ++) {
      std::cout << "$";
    }
    std::cout << "\n";
  }

  std::cout << std::endl;

  return 0;
}
