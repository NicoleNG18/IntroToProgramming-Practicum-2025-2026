#include<iostream>

int main(void) {
  int number, absolute;

  std::cin >> number;
  
  absolute = number < 0 ? number * -1 : number;
  // moje i 
  // ```absolute = (number < 0) * number * (-1) + (number >= 0) * number;```
  // ako jelaem da oburkame oponentite si... (ili da ne izpolzwame branching
  
  std::cout << absolute << std::endl;
  return 0;
}
