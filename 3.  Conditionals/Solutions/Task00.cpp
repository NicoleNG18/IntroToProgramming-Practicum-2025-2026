#include <iostream>

int main()
{
  std::cout << "Enter two numbers: ";
  
  int firstNum, secondNum;
  std::cin >> firstNum >> secondNum;

  std::cout << "The lower number is: ";
  std::cout << (firstNum <= secondNum ? firstNum : secondNum);
}
