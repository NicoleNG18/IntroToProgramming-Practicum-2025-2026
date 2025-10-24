#include <iostream>

int main () {
    double a, b, c, d;

    std::cin >> a >> b >> c >>d;

    bool expr = !(( a < c && a < d && b < c && b < d) || ( c < a && c < b && d < a && d < b));

    std::cout << std::boolalpha << expr;
}