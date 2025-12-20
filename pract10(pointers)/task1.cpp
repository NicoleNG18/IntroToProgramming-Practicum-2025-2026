#include <iostream>
unsigned strlenVA(const char* str)
{
    if (!str)
        return 0;
    unsigned length = 0;
    while (*str != '\0')
    {
        str++;
        length++;
    }
    return length;
}
int main ()
{
    char* str = "ZDRASTI";
    unsigned length = strlenVA(str);

    std::cout << length << std::endl;

}