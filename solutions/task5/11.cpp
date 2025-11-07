#include<iostream>

int countNWithKPrimeDivisorsInInterval(int a, int b, int k) {
int count = 0;

  for (int i = a; i <= b; i++) {
    int number = i;
    int primeDivisors = 0;
    int currentDivisor = 2;

    while (number > 1 && currentDivisor * currentDivisor <= number) {
      bool divided = false;
      while (number % currentDivisor == 0) {
        divided = true;
        number /= currentDivisor;
      }
      if (divided) {
        primeDivisors++;
      }

      currentDivisor++;
    }

    if (number > 1) {
      primeDivisors++;
    }

    if (primeDivisors == k) {
      count++;
    }
  }

  return count;
}

int main(void) {
  std::cout << countNWithKPrimeDivisorsInInterval(1, 10, 2) << std::endl;
  std::cout << countNWithKPrimeDivisorsInInterval(10, 20, 2) << std::endl;
  //za 10, 20, 2 
  //10 -> 2, 5
  //12 -> 2, 3
  //14 -> 2, 7
  //15 -> 3, 5
  //18 -> 2, 3
  //20 -> 2, 5
  return 0;
}
