#include <iostream>

unsigned gcd (unsigned num1, unsigned num2)
{
 
   if( num1 < num2) 
   {
       unsigned help = num1;
       num1=num2;
       num2=help;
   }
   
   while(num2 != 0)
   {
      unsigned rem = num1 % num2;
      num1 = num2;
      num2 = rem;
   }   
   
   return num1;
}

unsigned lcm(unsigned firstNum, unsigned secondNum){
    //here we call gcd function to reuse code
    return (firstNum*secondNum)/gcd(firstNum,secondNum);
}

int main()
{
   unsigned number1,number2;
   
   std::cout << "Enter first number: " << std::endl;
   std::cin >> number1;
   
   std::cout << "Enter second number: " << std::endl;
   std::cin >> number2;
   
   std::cout << "GCD: " << gcd(number1,number2) << std::endl;
   std::cout << "LCM: " << lcm(number1,number2) << std::endl;
       
}
