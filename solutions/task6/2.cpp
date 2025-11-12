#include<iostream>

long long toBinary(long num) {

  long ans = 0, runningPow = 1;

  while(num > 0) {
    ans += runningPow * (num % 2);
    runningPow *= 10;
    num /= 2;
  }

  return ans;
}

long long reverseDigit(long long digit) {
  long long r = 0;
  do{
    //std::cout << r << " " << digit << std::endl;
    r *= 10;
    r += digit % 10;
  }while((digit /= 10) > 0);
  return r;
}

bool isPalindrome(long long digit) {
  return reverseDigit(digit) == digit;
}

void printFirstNBinaryPalindromes(int n) {
  int count = 0;
  int curr = 1;
  while(count < n) {
    long long binary = toBinary(curr);
    if(isPalindrome(binary)) {
      count ++;
      std::cout << curr << " " << binary << "\n";
    }
    curr ++;
  }
  std::cout << std::endl;
}

void printFirst20BinaryPalindromes() {
  printFirstNBinaryPalindromes(20);
}

int main(void) {
  printFirst20BinaryPalindromes();
  return 0;
}
