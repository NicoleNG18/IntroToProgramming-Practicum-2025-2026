#include<iostream>
#include"./helper.h"

#define MAXSIZE 150

int main(void) {
  char arr[MAXSIZE], result[MAXSIZE], target;
  int size = inputArraySizeInRange(1, MAXSIZE);

  fillArrayChar(arr, size);

  std::cin >> target;

  int count = 0;
  for(int i = 0; i < size; i ++) {
    if(arr[i] == target) {
      count ++;
      result[i] = '*';
    }else {
      result[i] = arr[i];
    }
  }

  std::cout << "Count: " << count << std::endl;
  std::cout << "New string: " << result << '\0' << std::endl;

  return 0;
}
