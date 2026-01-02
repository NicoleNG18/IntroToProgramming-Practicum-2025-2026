#include <iostream>

const size_t MAX = 64;

void getArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        std::cin >> arr[i];
    }
}

bool isPalindrome(int arr[], int start, int end)
{
    while (start < end)
    {
        if (arr[start] != arr[end])
            return false;
        start++;
        end--;
    }
    return true;
}

bool isConcatenationOfPalindromes(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (isPalindrome(arr, 0, i) &&
            isPalindrome(arr, i + 1, size - 1))
        {
            return true;
        }
    }
    return false;
}

int main() 
{
    int arr[MAX];
    int n;

    std::cin >> n;
    getArray(arr, n);

    std::cout << std::boolalpha
              << isConcatenationOfPalindromes(arr, n);
}
