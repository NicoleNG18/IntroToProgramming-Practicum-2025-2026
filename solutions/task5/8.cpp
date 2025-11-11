#include<iostream>

// 1 based indexing, since it seems more appropriate
int removeNthDigit(int num, int digitIndex) {
  int result = 0, power = 1, current = 1;

  while(num > 0) {
    //std::cout << "Before: " << result << " " << power << " " << current << " " << num << std::endl;
    if(current != digitIndex) {
      result += power * (num % 10);
      power *= 10;
    }else {
      //std::cout << "Skipping..." << std::endl;
    }
    num /= 10;
    current ++;
    //std::cout << "After: " << result << " " << power << " " << current << " " << num << std::endl;
  }

  //std::cout << "Result: " << result << std::endl;
  return result;
}

int isDivisibleBy(int num, int divisor) {
  return num % divisor == 0;
}

bool isDivisbleBy11(int n) {
  return isDivisibleBy(n, 11);
}

int removeHundretsDigit(int num) {
  return removeNthDigit(num, 3);
}

void withinIntervalPrintParsedWithConditon(
    int intervalStart, int intervalEnd,
    int (*parse)(int),
    bool (*condition)(int)
) {
  bool foundAny = false;
  for(int n = intervalStart; n <= intervalEnd; n ++) {
    int parsed = parse(n);
    if(condition(parsed)) {
      foundAny = true;
      std::cout << n << " ";
    }
  }
  if(!foundAny) {
    std::cout << "No such number!";
  }
  std::cout << std::endl;
}

int main(void) {
  withinIntervalPrintParsedWithConditon(1000, 1200, removeHundretsDigit, isDivisbleBy11);
  //Na 2010 2009 -> 209 / 11 = 19 r0
  withinIntervalPrintParsedWithConditon(2000, 2010, removeHundretsDigit, isDivisbleBy11);
  withinIntervalPrintParsedWithConditon(2000, 2008, removeHundretsDigit, isDivisbleBy11);
  return 0;
}
