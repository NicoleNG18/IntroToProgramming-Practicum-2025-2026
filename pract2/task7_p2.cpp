#include <iostream>
int main ()
{
    int number;
    std::cin >> number;

    int negative = (number <= 0) * -1;//ako e vqrno trqbva da vurne -1
    int positive = (number > 0);// ako e vqrno trqbva da vurne 1


    int negativeNumber = negative * number;//-1 po vuvedenoto chislo
    int positiveNumber = positive * number;//1 po vuvedenoto chislo

    int absoluteNumber = negativeNumber + positiveNumber;//ednoto shte dava 0 dokato drugoto shte dava abs stoinost


    std::cout << absoluteNumber << std::endl;
}