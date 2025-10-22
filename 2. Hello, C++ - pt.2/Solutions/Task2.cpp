#include <iostream>

int main(){
     unsigned number;
     
     std::cout<< "Enter number: "<< std::endl;
     std::cin>>number;

     std::cout<< "Last digit: " << number % 10;
}
