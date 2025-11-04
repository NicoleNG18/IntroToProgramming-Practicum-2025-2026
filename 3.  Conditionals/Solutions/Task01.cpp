#include <iostream>

int main()
{
  std::cout << "Enter number to check: ";
  
  int numToCheck;
  std::cin >> numToCheck;
    
  std::cout << "Enter two numbers for interval: ";
  
  int begin, end;
  std::cin >> begin >> end;
 
  bool isInInterval = numToCheck >= begin && numToCheck <= end;

  std::cout << "Is " << numToCheck << 
               " in the interval [" << begin << "," << end << "]: "
               << (isInInterval ? "Yes" : "No");
}
