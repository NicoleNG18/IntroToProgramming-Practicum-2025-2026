#include <iostream>

int main () {

    double x, y;
    std:: cin >> x >> y;

    if (x > 0 && y > 0) {
        std:: cout << "First";
    }
    else if ( x < 0 && y > 0) {
        std:: cout << "Second";
    }
    else if (x < 0 && y < 0) {
        std:: cout << "Third";
    }
    else if (x > 0 && y < 0) {
        std:: cout << "Fourth";
    }
    else if ( x == 0 && y != 0) {
        std:: cout << "On Y axis";
    }
    else if ( y == 0 && x != 0) {
        std:: cout << "On X axis";
    }
    else {
        std:: cout << "Centre";
    }
}