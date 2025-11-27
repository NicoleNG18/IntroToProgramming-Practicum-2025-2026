#include<iostream>
#include"./helper.h"

#define MAXSIZE 64

int alphaToNum(char c) {
  if(c < 48 || c > 57) {
    std::cout << (int)c;
    exit(1);
  }

  return c - 48;
}

int sumUnique(char *arr, int size) {
  //0 - not seen; 1 - seen & unique; >= 1 - seen
  int existAndUnique[10] = {};

  for(int i = 0; i < size; i ++) {
    char ind = alphaToNum(arr[i]);
    existAndUnique[ind] ++;
  }

  int sum = 0;
  for(int i = 0; i < 10; i ++) {
    if(existAndUnique[i] == 1) {
      sum += i;
    }
  }

  return sum;
}

int main(void) {
  char arr[MAXSIZE];
  int size = inputArraySizeInRange(1, MAXSIZE);

  for(int i = 0; i < size; i ++) {
    std::cin >> arr[i];
  }

  std::cout << sumUnique(arr, size) << std::endl;

  return 0;
}
