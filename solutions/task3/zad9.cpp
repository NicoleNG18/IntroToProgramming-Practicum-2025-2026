#include<iostream>

int main(void) {
  unsigned short num1, num2;

  std::cin >> num1 >> num2;

  unsigned short combined = num1 * 100 + num2;
  std::cout << combined;


  unsigned isIncreasing = true;
  unsigned short last = 10;

  if(combined % 10 < last) {
    last = combined % 10;
    combined /= 10;
  }else {
    isIncreasing = false;
  }

  if(combined % 10 < last) {
    last = combined % 10;
    combined /= 10;
  }else {
    isIncreasing = false;
  }

  if(combined % 10 < last) {
    last = combined % 10;
    combined /= 10;
  }else {
    isIncreasing = false;
  }

  if(combined % 10 < last) {
    last = combined % 10;
    combined /= 10;
  }else {
    isIncreasing = false;
  }

  std::cout << (isIncreasing ? "YES" : "NO") << std::endl;

  return 0;
}
