

#include <iostream>

int main()
{
    unsigned int a, row, col;
    double x, y;
    std::cout << "Enter length of side a: ";
    std::cin >> a;
    std::cout << "Enter coordinates x and y: ";
    std::cin >> x >> y;

    col = int(x / a);
    row = int(y / a);

    if (x < 0 || y < 0) {
        std::cout << "Point is not in first quadrant." << std::endl;
    }
    else
        std::cout << ((row + col) % 2 == 0 ? "Black" : "White") << std::endl;
    //sborut na reda i colonata na chernite kvadratcheta vinagi e chetno chislo
    //tova vaji samo za purvi i treti kvadrant

}
