
#include<iostream>
#include"./helper.h"

#define MAXSIZE 128

bool isZigZag(int *arr, int size) {
  
  for(int i = 0; i < size - 1; i ++) {
    if(i % 2 == 0 && arr[i] >= arr[i + 1]) {
      return false;
    }
    if(i % 2 == 1 && arr[i] <= arr[i + 1]) {
      return false;
    }
  }
  
  return true;
}

int main(void) {
  int arr[MAXSIZE];
  int size = intInputArrayInRange(arr, 1, MAXSIZE);

  std::cout << std::boolalpha << isZigZag(arr, size) << std::endl;

  return 0;
}
