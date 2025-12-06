#include <iostream>
const size_t ROWS = 128;
void getMatrix1 (int matrix1[][ROWS], unsigned rows, unsigned columns) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < columns; j++) {
            std::cin >> matrix1[i][j];
        }
    }
}
void getMatrix2 (int matrix2 [][ROWS], unsigned rows, unsigned columns) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < columns; j++) {
            std::cin >> matrix2[i][j];
        }
    }
}
void sumOfMatrixes(int matrix1 [][ROWS], int matrix2 [][ROWS], unsigned rows, unsigned columns, int sum[][ROWS]) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < columns; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            std::cout << sum[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
void subOfMatrixes(int matrix1 [][ROWS], int matrix2 [][ROWS], unsigned rows, unsigned columns, int sub [][ROWS]) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < columns; j++) {
            sub[i][j] = matrix1[i][j] - matrix2[i][j];
            std::cout << sub[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
int main () {
    unsigned size;
    do {
        std::cin >> size;
    } while (size > ROWS);

    int matrix1[ROWS][ROWS];
    int matrix2[ROWS][ROWS];

    getMatrix1(matrix1, size, size);
    getMatrix2(matrix2, size, size);

    int sum[ROWS][ROWS];
    std::cout << "Sum of matrixes:" << std::endl;
    sumOfMatrixes(matrix1, matrix2, size, size, sum);
    std::cout << std::endl;

    int sub[ROWS][ROWS];
    std::cout << "Substract of matrixes:" << std::endl;
    subOfMatrixes(matrix1, matrix2, size, size, sub);
}