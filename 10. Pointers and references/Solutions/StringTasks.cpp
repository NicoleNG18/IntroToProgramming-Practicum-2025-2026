#include <iostream>

// 1. Напишете функция, която намира дължината на символен низ. (strlen)
unsigned myStrlen(const char* str) {

    //ptr check!!!
    if (!str)
        return 0;

    unsigned len = 0;
    while (*str) {
        str++;
        len++;
    }

    return len;
}

// 2. Напишете функция, която копира символите на един низ в друг низ. (strcpy)
void myStrcpy(const char* src, char* dest) {

    //ptr check!!!
    if(!src || !dest)
        return;

    while(*src) {
        *dest = *src;
        src++;
        dest++;
    }
    // important!!!
    *dest='\0';
}

// 3. Напишете функция, която конкатенира два низа. (strcat)
void myStrcat(char* first, const char* second)
{
    //ptr check!!!
    if (!first || !second)
        return;

    size_t firstLen = myStrlen(first);
    //move the ptr to the last symbol of first; first has to have enough space
    first += firstLen;
    myStrcpy(second, first);
}

// 4. Напишете функция, която сравнява два низа лексикографски. Ако първият низ е лексикографски по-малък от втория, трябва да се върне някаква отрицателна стойност; ако са равни, трябва да се върне 0; ако първият е по-голям лексикографски от втория, трябва да се върне някаква положителна стойност (strcmp)
int myStrcmp(const char* fst, const char* snd) {

    if (!fst || !snd)
        return 0;

    while ((*fst) && (*snd) && ((*fst) == (*snd)))
    {
        fst++;
        snd++;
    }

    return (*fst - *snd);
}

// 5. Напишете функция, която преобразува (parse-ва) символен низ в число (работи с цели числа)
char getCharFromDigit(unsigned digit)
{
    if (digit > 9)
        return '\0';

    return digit + '0';
}

unsigned getNumberLength(unsigned num)
{
    if (num == 0)
        return 1;

    unsigned cnt = 0;
    while (num > 0)
    {
        cnt++;
        num /= 10;
    }

    return cnt;
}

void numToString(unsigned num, char* str)
{
    unsigned numLength = getNumberLength(num);

    for (int i = numLength - 1; i >= 0; i--)
    {
        str[i] = getCharFromDigit(num % 10);
        num /= 10;
    }
    /// important!!!!
    str[numLength] = '\0';
}

int main()
{
    char str[20] = "ABC";
    char str2[] = "XY";
    char str3[] = "test";

    std::cout << "str len: " << myStrlen(str) << std::endl;
    std::cout << "str2 len: " << myStrlen(str2) << std::endl;
    std::cout << "str cmp to str2: " << myStrcmp(str, str2) << std::endl;

    myStrcat(str, str2);
    std::cout << "str + str2: " << str << std::endl;

    myStrcpy(str3, str);
    std::cout << "test in str: " << str << std::endl;

    long long number = 123452429;
    char strNumber[20];
    numToString(number, strNumber);
    std::cout << "strNumber: " << strNumber << std::endl;
}