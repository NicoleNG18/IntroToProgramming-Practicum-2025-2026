#include <iostream>

const size_t MAX = 256;

void getArray(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

bool isPermutation(char firstArr[], int size, char secondArr[])
{
    int freq1[26] = {0};
    int freq2[26] = {0};

    for (int i = 0; i < size; i++)
    {
        freq1[firstArr[i] - 'a']++;
        freq2[secondArr[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
            return false;
    }

    return true;
}

int main()
{
    char firstArr[MAX];
    char secondArr[MAX];

    int size;
    std::cin >> size;

    getArray(firstArr, size);
    getArray(secondArr, size);

    std::cout << std::boolalpha << isPermutation(firstArr, size, secondArr);
}
