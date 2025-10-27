#include<iostream>

int main(void) {

  unsigned int a, b, lcd = 0;

  std::cin >> a >> b;

  //LCM method, daite mi masiwi ;(
  for(int i = 1; i <= b; i ++) {
    unsigned long multiplee_a = a * i;
    //std::cout << "A: " << multiplee_a << "\n";

    for(int j = 1; j <= a; j ++) {
      unsigned long multiplee_b = b * j;
      //std::cout << "B: " << multiplee_b << "\n";

      //Little optimisation
      if(multiplee_a < multiplee_b) break;

      if(multiplee_b == multiplee_a) {
        lcd = multiplee_a;
        break;
      }
    }
    
    if(lcd) {
      break;
    }
  }

  std::cout << lcd << std::endl;

  return 0;
}
