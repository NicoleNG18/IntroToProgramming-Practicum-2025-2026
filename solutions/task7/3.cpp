#include<iostream>
#include"./helper.h"

#define MAXSIZE 30

bool isValidParenth(char *arr, int size) {
  int balance = 0;
  for(int i = 0; i < size; i ++) {
    if(arr[i] == '(') {
      balance ++;
    }else {
      balance --;
    }
  }

  return !balance;
}

int main(void) {

  char arr[MAXSIZE];
  int size = inputArraySizeInRange(1, MAXSIZE);

  for(int i = 0; i < size; i ++) {
    std::cin >> arr[i];
    if(arr[i] != '(' && arr[i] != ')') {
      std::cout << "Only ( and ) are allowed! Try again: ";
      i --;
    }
  }

  std::cout << std::boolalpha << isValidParenth(arr, size) << std::endl;

  return 0;
}
