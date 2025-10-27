#include<iostream>

int main(void) {

  unsigned int n;

  std::cin >> n;

  if(n < 2) {
    std::cout << "Invalid input." << std::endl;
    return 1;
  }


  int max = -1, second_max = -1;

  for(int i = 0; i < n; i ++) {
    int input;

    std::cin >> input;
    if(input >= max) {
      max = input;
    }else if(input > second_max){
      second_max = input;
    }

  }

  std::cout << max << " " << second_max << std::endl;
  

  return 0;
}
