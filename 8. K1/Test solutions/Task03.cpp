#include <iostream>

void readNumber(int arr[]) {
    int number;
    
    do {
      std::cin >> number;
    } while (number < 0 || number > 9);
    
    arr[number]++;
 }

unsigned getMaxCount(int arr[]) {
    
    int maxCount = arr[0];
    
    for (size_t i = 1;i < 10;i++) {
        if (arr[i] > maxCount) {
           maxCount = arr[i];
       }
    }
    
    return maxCount;
}

void printHistogram(int arr[], unsigned maxCount) {

    for (int i = maxCount;i > 0;i--) {
      for (size_t j = 0;j < 10;j++) {
          
        if (arr[j] >= i)
            std::cout << "* ";
        else
            std::cout << "  ";
        }
    
       std::cout << std::endl;
    }

   std::cout<<"0 1 2 3 4 5 6 7 8 9";
}

int main() {

   unsigned number;

   do {
      std::cout << "Enter number: ";
      std::cin >> number;
    } while (number < 1 || number > 100);

   int arr[10] { 0 };

   for (unsigned i = 0; i < number;i++) {
      readNumber(arr);
   }

    unsigned maxCount = getMaxCount(arr);
    printHistogram(arr,maxCount);
 }
