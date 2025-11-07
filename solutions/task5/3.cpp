#include<iostream>

unsigned long long reverseUint64(unsigned long long n) {

  int digitCount = 0;
  unsigned long long copyOfN = n;
  unsigned long long answer = 0;
  do{
    digitCount ++;
    answer = (answer * 10) + (copyOfN % 10);
  }while((copyOfN /= 10) > 0);

  return answer;
}

int main(void) {
  unsigned long long in;
  std::cin >> in;
  unsigned long long test = reverseUint64(in);
  std::cout << test << std::endl;
  return 0;
}
