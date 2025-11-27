#include<iostream>
#include"./helper.h"

#define MAXSIZE 128

unsigned long long shiftAndAdd(unsigned long long n, int addie) {
  return (n * 10) + (unsigned long long)addie;
}

unsigned long long compress(int *arr, int size) {
  unsigned long long o = 0;
  unsigned short currDigit = arr[0];
  unsigned short currCount = 0;
  for(int i = 0; i < size; i ++) {
    if(arr[i] != currDigit) {
      o = shiftAndAdd(o, currDigit);
      o = shiftAndAdd(o, currCount);
      currDigit = arr[i];
      currCount = 0;
    }
    currCount ++;
  }

  o = shiftAndAdd(o, currDigit);
  o = shiftAndAdd(o, currCount);

  return o;
}

int main(void) {
  int arr[MAXSIZE];
  int size = intInputArrayInRange(arr, 1, MAXSIZE);

  std::cout << compress(arr, size) << std::endl;

  return 0;
}


