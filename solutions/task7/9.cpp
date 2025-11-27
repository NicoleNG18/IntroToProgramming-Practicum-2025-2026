#include<iostream>
#include"./helper.h"

#define MAXSIZE 16

int min(int *arr, int size) {
  int min = INT_MAX;
  for(int i = 0; i < size; i ++)
    if(arr[i] < min) min = arr[i];
  return min;
}

int calcGCD(int *arr, int size) {
  int gcd = 1;
  for(int candidate = 1; candidate <= min(arr, size); candidate ++) {
    bool allDivisible = true;
    for(int i = 0; i < size; i ++) {
      if(arr[i] % candidate) {
        allDivisible = false;
        break;
      }
    }
    if(allDivisible && candidate > gcd) gcd = candidate;
  }
  return gcd;
}


int main(void) {
  int arr[MAXSIZE];
  int size = intInputArrayInRange(arr, 1, MAXSIZE);

  std::cout << calcGCD(arr, size) << std::endl;
  return 0;
}
