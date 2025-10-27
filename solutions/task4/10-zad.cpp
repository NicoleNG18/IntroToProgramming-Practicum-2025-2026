#include<iostream>

int main(void) {
  long number;
  
  std::cin >> number;
     
  int count0 = 0;
  int count1 = 0;
  int count2 = 0;
  int count3 = 0;
  int count4 = 0;
  int count5 = 0;
  int count6 = 0;
  int count7 = 0;
  int count8 = 0;
  int count9 = 0;
  
  do{
    int last = number % 10;
    switch(last) {
      case 0: count0 ++; break;
      case 1: count1 ++; break;
      case 2: count2 ++; break;
      case 3: count3 ++; break;
      case 4: count4 ++; break;
      case 5: count5 ++; break;
      case 6: count6 ++; break;
      case 7: count7 ++; break;
      case 8: count8 ++; break;
      case 9: count9 ++; break;
    }
  }while((number /= 10) > 0);
  
  long max_c = 0, max_d = -1;

  for(int i = 1; i <= 9; i ++) {

    short count;

    switch(i) {
      case 0: count = count0; break;
      case 1: count = count1; break;
      case 2: count = count2; break;
      case 3: count = count3; break;
      case 4: count = count4; break;
      case 5: count = count5; break;
      case 6: count = count6; break;
      case 7: count = count7; break;
      case 8: count = count8; break;
      case 9: count = count9; break;
    }

    if(count > max_c || (count == max_c && i > max_d)) {
      max_c = count;
      max_d = i;
    }
  }

  std::cout << max_d << std::endl;

  return 0;
}
