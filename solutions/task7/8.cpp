#include<iostream>
#include"./helper.h"

//ako ima poveche ot 100 prosti tupo
#define MAX_FACTOR_COUNT 100
#define MAX_ITERATIONS ULONG_MAX - 1

bool isPrime(unsigned long n) {
  for(unsigned long i = 2; i <= n/2; i ++) {
    if(n % i == 0) {
      return false;
    }
  }
  return true;
}

unsigned long nextPrime(unsigned long n) {
  unsigned long p = n+1;
  while(p < MAX_ITERATIONS) {
    if(isPrime(p)) {
      return p;
    }
    p ++;
  }
  std::cout << "svurshiha chislata haha" << std::endl;
  exit(1);
  return 0; 
}


//returns how many unique factors were found
int factorize(unsigned long n, unsigned long *factors, unsigned long *powers) {

  int factorsCount = 0;
  size_t currentFactorIndex = -1;
  unsigned long currentFactor = 2;
  do{
    while(n % currentFactor) {
      currentFactor = nextPrime(currentFactor);
    }
    factorsCount ++;
    currentFactorIndex ++;
    factors[currentFactorIndex] = currentFactor;
    powers[currentFactorIndex] = 0;
    while(n % currentFactor == 0) {
      n /= currentFactor;
      powers[currentFactorIndex] ++;
    }
  }while(n > 0 && currentFactor < n && currentFactorIndex < MAX_FACTOR_COUNT);
  return factorsCount;
}

int main(void) {
  unsigned long number;
  unsigned long factors[MAX_FACTOR_COUNT], powers[MAX_FACTOR_COUNT];

  std::cin >> number;

  int factorCount = factorize(number, factors, powers);

  for(int i = 0; i < factorCount; i ++) {
    std::cout << factors[i];
    if(powers[i] != 1) {
      std::cout << "^" << powers[i];
    }
    if(i != factorCount - 1) {
      std::cout << "*";
    }
  }
  std::cout << std::endl;

  return 0;
}
