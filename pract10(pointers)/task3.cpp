#include <iostream>
unsigned strlenVA(const char* string) {
    unsigned length = 0;
    while (*string) {
        string++;
        length++;
    }
    return length;
}
void strcatVA(const char* str1, char* str2) {

    unsigned lengthOfStr1 = strlenVA(str1);
    unsigned lengthOfStr2 = strlenVA(str2);

    if (!str1 || !str2)
        return;

    for (size_t i = 0; i <= lengthOfStr1; i++) {
        *(str2 + strlen(str2)) = *str1;
        str1++;
    }
    *(str2 + lengthOfStr1 + lengthOfStr2) = '\0';
}
int main () {
    char str1[] = "ko sa praish";
    char str2[20] = "brat,";

    strcatVA(str1, str2);
    std::cout << str2 << std::endl;
}