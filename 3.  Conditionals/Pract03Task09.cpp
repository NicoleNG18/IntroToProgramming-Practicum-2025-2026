# include <iostream>

int main() {

    double squareSide, firstC, secondC;
    std::cin >> squareSide >> firstC >> secondC;

    // приемам че квадратите са 6 на 6
    if ((firstC > 0 && firstC < squareSide) ||
        (firstC > 2 * squareSide  && firstC < 3 * squareSide) ||
        (firstC > 4 * squareSide  && firstC < 5 * squareSide)) {

        if ((secondC > 0 && secondC < squareSide) ||
        (secondC > 2 * squareSide && secondC < 3 * squareSide) ||
        (secondC > 4 * squareSide  && secondC < 5 * squareSide)) {
            std::cout << "black";
        } else {
            std::cout << "white";
        }

    } else if (firstC == squareSide || secondC == squareSide) {
        std::cout << "on the line";

    } else {
        if ((secondC > 0 && secondC < squareSide) ||
        (secondC > 2 * squareSide && secondC < 3 * squareSide) ||
        (secondC > 4 * squareSide  && secondC < 5 * squareSide)) {
            std::cout << "white";
        } else {
            std::cout << "black";
        }
    }
}