#include <iostream>
const size_t ROWS = 128;
const size_t COLS = 128;
void getMatrix(int matrix[][COLS], unsigned rows, unsigned cols) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }
}
void getMainDiagonal(int matrix[][COLS], unsigned rows, unsigned cols) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            if (i == j) {
                std::cout << matrix[i][j] << " ";
            }
        }
    }
    /* for (size_t i = 0; i < rows; i++)
     * {
     *      std::cout << matrix[i][i] << " ";
     * }*/
}
void getSecondaryDiagonal(int matrix[][COLS], unsigned rows, unsigned cols) {
    for (size_t i = 0, j = cols - 1; i < rows && j >= 0; i++, j--) {
            if (i != j) {
                std::cout << matrix[i][j] << " ";
                continue;
            }
            if (i == j) {
                std:: cout << matrix[i][j] << " ";
            }
    }
}
int getMaxElement(int matrix[][COLS], unsigned rows, unsigned cols) {
    int max = 0;
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    return max;
}
int getMinElement(int matrix[][COLS], unsigned rows, unsigned cols) {
    int min = matrix[0][0];
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }
    return min;
}
int main () {
    unsigned rows, cols;
    do {
        std::cin >> rows;
    } while (rows > ROWS);
    do {
        std::cin >> cols;
    } while (cols > COLS);

    int matrix [ROWS][COLS];

    getMatrix(matrix, rows, cols);
    getMainDiagonal(matrix, rows, cols);
    std::cout << std::endl;
    getSecondaryDiagonal(matrix, rows, cols);
    std::cout << std::endl;
    std::cout << getMaxElement(matrix, rows, cols) << std:: endl;
    std::cout << getMinElement(matrix, rows, cols);
}