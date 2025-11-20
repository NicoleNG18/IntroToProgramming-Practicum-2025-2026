#include <iostream>
void toRhombus(unsigned input)
{
    const int DIMENSIONS = 2 * input - 1;
    const int MIDDLE = input - 1;

    for (int r = 0; r < DIMENSIONS; r++) {
        for (int c = 0; c < DIMENSIONS; c++) {
            if (c == MIDDLE || r == MIDDLE) {
                std::cout << '*';
                continue;
            }

            int renderFromIndex = MIDDLE - r - 1;
            int skipFromColIndex = DIMENSIONS - renderFromIndex - 1;

            if (r < MIDDLE && c > renderFromIndex && c < skipFromColIndex) {
                std::cout << '*';
                continue;
            }

            int skipColsBeforeMidY = r - MIDDLE - 1;
            int skipColsAfterMidY = DIMENSIONS - skipColsBeforeMidY - 1;

            if (r > MIDDLE && c > skipColsBeforeMidY && c < skipColsAfterMidY) {
                std::cout << '*';
                continue;
            }

            std::cout << ' ';
        }
        std::cout << std::endl;
    }

}
int main ()
{
    unsigned num;
    std::cin >> num;

    toRhombus(num);
}