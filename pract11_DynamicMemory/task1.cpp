//1.Напишете функция, която приема масив от цели числа и елемент на масива. Функцията преподрежда елементите,
//така че всички по-малки елементи от подадения да са вляво, а всички по-големи — вдясно.
#include <iostream>
int* createArr(unsigned size) {
    int* arr = new int [size];
    for (size_t i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    return arr;
}
bool isNumberInArrray(const int* arr, size_t size, int number) {
    for (size_t i = 0; i < size; i++) {
        if (number == arr[i])
            return true;
    }
    return false;
}
void reOrganizeArr(int* array, size_t size, int number)
{
    bool isInArray = isNumberInArrray(array, size, number);
    if (!isInArray)
        return;

    int* newArr = new int[size]; //tozi array shte gi podredi i shte gi dade kato novi stoinosti na purvonachalniq array
    size_t index = 0;

    // po-malkite ot vuvedenoto chislo
    for (size_t i = 0; i < size; i++) {
        if (array[i] < number)
            newArr[index++] = array[i];
    }

    // samoto chislo
    newArr[index++] = number;

    // po-golemite ot vuvedenoto chislo
    for (size_t i = 0; i < size; i++) {
        if (array[i] > number)
            newArr[index++] = array[i];
    }

    // копиране обратно
    for (size_t i = 0; i < size; i++) {
        array[i] = newArr[i];
        std::cout << array[i] << " ";
    }

    delete[] newArr;
}
int main () {
    unsigned sizeOfArr;

    std::cout << "Enter size of array: ";
    std::cin >> sizeOfArr;

    int* array = createArr(sizeOfArr);
    int number;
    std::cout << "Chose number from array:";
    std::cin >> number;

    reOrganizeArr(array, sizeOfArr, number);

    delete[] array;
}