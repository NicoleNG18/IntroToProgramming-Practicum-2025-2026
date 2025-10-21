#include<iostream>

int main(void) {
  unsigned short hours, minutes;
  std::cin >> hours >> minutes;

  bool minutes_overflow = (minutes += 15) >= 60;
  
  if(minutes_overflow) {

    hours ++;
    minutes %= 15;

    if(hours >= 24) {
      hours = 0;
    }
  }

  unsigned char hours_leader = hours < 10 ? '0' : '\0';
  unsigned char minutes_leader = minutes < 10 ? '0' : '\0';

  std::cout << hours_leader << hours << ':' << minutes_leader << minutes << std::endl;


  return 0;
}

