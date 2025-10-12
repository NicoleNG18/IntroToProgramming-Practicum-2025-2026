#include<iostream>


int main(void) {
  const int SECONDS_IN_DAY = 3600 * 24;
  int seconds, minutes, days, hours, input;
  
  std::cin >> input;

  days = input / SECONDS_IN_DAY;
  hours = (input %= SECONDS_IN_DAY) / 3600;
  minutes = (input %= 3600) / 60;
  seconds = (input %= 60);

  std::cout << days << " days, "
            << hours << " hours, "
            << minutes << " minutes, " 
            << seconds << " seconds" 
            << std::endl;
  return 0;
}
