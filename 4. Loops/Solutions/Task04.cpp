#include <iostream>

int main()
{
   unsigned number1,number2;
   
   std::cout << "Enter first number: " << std::endl;
   std::cin >> number1;
   
   std::cout << "Enter second number: " << std::endl;
   std::cin >> number2;
   
   unsigned num1Copy = number1;
   unsigned num2Copy = number2;
   
   if( number1 < number2) 
   {
       unsigned help = number1;
       number1=number2;
       number2=help;
   }
   
   while(number2 != 0)
   {
      unsigned rem = number1 % number2;
      number1 = number2;
      number2 = rem;
   }    
  
  //number1 is the gcd and the formula is (a*b)/gcd(a,b)
  std::cout << "LCM is: " << (num1Copy*num2Copy)/number1;
       
}
