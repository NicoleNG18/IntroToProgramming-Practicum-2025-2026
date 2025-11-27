#include<iostream>
#include"./helper.h"

#define MAXSIZE 500

bool containsConsec(int* arr, int len) {
  for(int i = 0; i < len - 1; i ++) {
    if(arr[i] == arr[i + 1]) {
      return true;
    }
  }
  return false;
}

int main(void) {

  int arr[MAXSIZE];
  int n = inputArraySizeInRange(1, MAXSIZE);
  fillArrayInt(arr, n);

  std::cout << std::boolalpha << containsConsec(arr, n) << std::endl;

  return 0;
}
