#include<iostream>
#include"./helper.h"

#define MAXSIZE 256
#define ALPHABET "abcdefghijklmnopqrstuvwxyz"
#define ALPHABET_SIZE 27

void enterCharArray(char *arr, int size) {
  for(int i = 0; i < size; i ++) {
    std::cin >> arr[i];
  }
}

int countCharInArray(char* arr, int size, char c) {
  int cnt = 0;
  for(int i = 0; i < size; i ++) if(arr[i] == c) cnt ++;
  return cnt;
}

bool arePermutations(char *arr, char *cand, int size) {
  char alphabet[ALPHABET_SIZE] = ALPHABET;
  for(int letterIndex = 0; letterIndex < ALPHABET_SIZE; letterIndex ++) {
    if(
      countCharInArray(arr, size, alphabet[letterIndex]) !=
      countCharInArray(cand, size, alphabet[letterIndex])
    ) return false;
  }
  return true;
}

int main(void) {
  char arr[MAXSIZE], perm[MAXSIZE];
  int size = inputArraySizeInRange(1, MAXSIZE);
  enterCharArray(arr, size);
  enterCharArray(perm, size);

  std::cout << std::boolalpha << arePermutations(arr, perm, size) << std::endl;
  return 0;
}

