#include<iostream>

bool isEven(int n) {
  return n % 2 == 0;
}

int sumOfDigits(int n) {
  //setih se che sa pass by value chislata, ama nqma da go opravqm v drugite zadachi
  int sum = 0;
  do {
    sum += n % 10;
  }while((n /= 10) > 0);
  return sum;
} 

int prodOfDigits(int n) {
  int prod = 1;
  do {
    prod *= n % 10;
  }while((n /= 10) > 0);
  return prod;
} 

int reverse(int n) {
  int r = 0;
  do {
    r *= 10;
    r += n % 10;
  }while((n /= 10) > 0);
  return r;
}

bool isPalindrome(int n) {
  int r = reverse(n);
  return r == n;
}

int main(void) {
  int n;
  std::cin >> n;
  while(n <= 0) {
    std::cout << "Positive number required" << std::endl;
    std::cin >> n;
  }
  std::cout << "Is even: " << std::boolalpha << isEven(n) << std::endl;
  std::cout << "Sum of digits: " << sumOfDigits(n) << std::endl;
  std::cout << "Prod of digits: " << prodOfDigits(n) << std::endl;
  std::cout << "Is Palindrome: " << std::boolalpha << isPalindrome(n) << std::endl;
  return 0;
}
