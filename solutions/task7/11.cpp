#include<iostream>
#include"./helper.h"

#define MAXSIZE 256

bool isPalindrome(int *arr, int start, int end) {
  while(start < end) {
    if(arr[start] != arr[end-1]) {
      return false;
    }
    start ++;
    end --;
  }
  return true;
}

void print(int *arr, int start, int end) {
  for(int i = start; i < end; i ++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::boolalpha << isPalindrome(arr, start, end);
  std::cout << std::endl;
}

bool isConcatOfPalindromes(int *arr, int size) {
  for(int i = 1; i < size; i ++) {
    //print(arr, 0, i);
    //print(arr, i, size);
    if(isPalindrome(arr, 0, i) && isPalindrome(arr, i, size)) {
      return true;
    }
  }
  return false;
}

int main(void) {
  int arr[MAXSIZE];
  int size = intInputArrayInRange(arr, 1, MAXSIZE);

  std::cout << std::boolalpha << isConcatOfPalindromes(arr, size) << std::endl;
  return 0;
}
