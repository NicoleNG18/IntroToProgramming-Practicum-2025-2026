#include <iostream>
const size_t ROWS = 128;
const size_t COLS = 128;
void getElementsOfMatrix(int matrix[][COLS], unsigned rows, unsigned cols) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }
}
void transpose(int transposed[][COLS], int matrix[][COLS], unsigned rows, unsigned cols) {
    getElementsOfMatrix(matrix, rows, cols);
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            if (i == j) {
                transposed[i][j] = matrix[i][j];
                std::cout << transposed[i][j] << " ";
            }
            if (i > 0 && j == 0) {
                transposed[i][j] = matrix[j][i];
                std::cout << transposed[i][j] << " ";
            }
            if (j > 0 && i != j) {
                transposed[i][j] = matrix[j][i];
                std::cout << transposed[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
}
int main () {
    unsigned rows, cols;
    do {
        std::cout << "Enter number of rows:  ";
        std::cin >> rows;
    } while (rows > ROWS);
    do {
        std::cout << "Enter number of columns: ";
        std::cin >> cols;
    } while (cols > COLS);

    int matrix[ROWS][COLS];
    int transposed[ROWS][COLS];

    transpose(transposed, matrix, rows, cols);
}