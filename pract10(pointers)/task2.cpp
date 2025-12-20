#include <iostream>
void strcpyVA(const char* string, char* dest)
{
    if (!string || !dest)
        return;
    while (*string)
    {
        *dest = *string;
        string++;
        dest++;
    }
    *dest = '\0';

}
int main ()
{
    char string[] = "zdra";
    char dest[30] = "opa";

    strcpyVA(string, dest);
    std::cout << dest << std::endl;
}