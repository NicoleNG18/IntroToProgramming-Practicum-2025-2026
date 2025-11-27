#include<iostream>
#include"./helper.h"

#define MAXSIZE 256

int countInversions(int *arr, int size) {
  int inversions = 0;
  for(int i = 0; i < size - 1; i ++)
    for(int j = i + 1; j < size; j ++)
      inversions += arr[i] > arr[j];
  return inversions;
}

int main(void) {
  int arr[MAXSIZE];
  int size = intInputArrayInRange(arr, 1, MAXSIZE);

  int count = countInversions(arr, size);
  std::cout << "Inversions count: " << count << '\n';
  std::cout << "Parity: " << (count % 2 ? "Odd" : "Even") << std::endl;

  return 0;
}
