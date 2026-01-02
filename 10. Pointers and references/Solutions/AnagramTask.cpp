//Две изречения са анаграми едно на друго, ако съдържат еднакъв брой букви (английски) и всяка буква от едното изречение се среща еднакъв брой пъти и 
//в двете изречения. Не правим разлика между главни и малки английски букви. Напишете функция, която по два символни низа, съдържащи английски букви и 
//евентуално интервали, проверява дали двата низа са анаграми един на друг.

#include <iostream>

const unsigned ALPHABET_COUNT = 26;

bool isLower(char ch)
{
    return ch >= 'a' && ch <= 'z';
}

bool isUpper(char ch)
{
    return ch >= 'A' && ch <= 'Z';
}

bool isLetter(char ch)
{
    return isUpper(ch) || isLower(ch);
}

char toLower(char ch)
{
    if (isUpper(ch))
        return ch + 'a' - 'A';

    return ch;
}

void countOcc(const char* str, unsigned count[])
{
    if (!str)
        return;

    while (*str)
    {
        if (isLetter(*str))
        {
            unsigned index = toLower(*str) - 'a';
            count[index] += 1;
        }
        str += 1;
    }
}

bool isAnagram(const char* str1, const char* str2)
{
    if (!str1 || !str2)
        return false;

    unsigned str1Count[ALPHABET_COUNT]{};
    unsigned str2Count[ALPHABET_COUNT]{};

    countOcc(str1, str1Count);
    countOcc(str2, str2Count);

    for (size_t i = 0; i < ALPHABET_COUNT; i++)
    {
        if (str1Count[i] != str2Count[i])
            return false;
    }

    return true;
}

int main()
{
    bool result = isAnagram(" p E    o", "eop");
    std::cout << result;
}
