#include <iostream>
size_t MAX_SIZE = 150;
void symbInString (char str[], char symb) {
    unsigned count = 0;
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] == symb) {
            str[i] = '*';
            count++;
        }
    }

    if (count > 0) {
        std::cout << "Count: " << count << std::endl;
    }

    std::cout << "New string: " << str << std::endl;
}
int main () {


    char str[MAX_SIZE + 1];
    std::cout << "Enter sequence of symbols: ";
    std::cin >> str;

    char symb;
    std::cout << "Enter symbol: ";
    std::cin >> symb;

    symbInString(str, symb);
}