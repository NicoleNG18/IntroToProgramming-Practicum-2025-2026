#include<iostream>

int main(void) {

  int n;

  std::cin >> n;

  long sum = (n + 1) * n / 2;

  for(int i = 0; i < n-1; i ++) {
    int input;

    std::cin >> input;

    sum -= input;
  }

  std::cout << "\n" << sum << std::endl;


  return 0;
}
