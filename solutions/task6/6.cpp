#include<iostream>

void printNStars(int n) {
  for(int i = 0; i < n; i ++) {
    std::cout << '*';
  }
}
void printNSpaces(int n) {
  for(int i = 0; i < n; i ++){
    std::cout << ' ';
  }
}

void printSpacesAroundStars(int spaceCount, int starCount) {
  printNSpaces(spaceCount);
  printNStars(starCount);
  printNSpaces(spaceCount);
}

int abs(int n) {
  if(n < 0) {
    return -n;
  }
  return n;
}

void printRhombus(int n) {
  if(n % 2 == 0) return;

  int middle = n / 2 + 1;
  for(int i = 1; i <= n; i ++) {
    int surroundingSpaces = abs(middle - i);
    int starCount = n - surroundingSpaces * 2;
    printSpacesAroundStars(surroundingSpaces, starCount);
    std::cout << std::endl;
  }
}

int main(void) {
  printRhombus(7);
  printRhombus(8);
  printRhombus(11);
  return 0;
}
