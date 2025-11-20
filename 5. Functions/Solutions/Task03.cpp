#include <iostream>

unsigned countDigits(unsigned number)
{
  unsigned cnt = 0;

  while(number > 0)
  {
    number/=10;
    cnt++;
  }
  return cnt;
}

int main()
{
  std::cout << "Enter natural number: " << std::endl;
  unsigned number;
  std::cin>>number;

  std::cout<< "The number " << number << " has " << countDigits(number) << " digits." << std::endl;
}
