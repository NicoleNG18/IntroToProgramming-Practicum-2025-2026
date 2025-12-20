#include <iostream>

const size_t MAX_SIZE_ROWS = 128;

void getMatrix(int matrix[][MAX_SIZE_ROWS], size_t size) {

    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size; j++) {
            std::cout << "Enter matrix [" << i << "] [" << j << "]: " << std::endl;
            std::cin >> matrix[i][j];
        }
    }

}

void printMatrix(int matrix[][MAX_SIZE_ROWS], size_t size) {

    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

}

void printMainDiagMatrix(int matrix[][MAX_SIZE_ROWS], size_t size) {

    for (size_t i = 0; i < size; i++) {
        std::cout << matrix[i][i] << " ";
    }
    std::cout << std::endl;
}

void printSecondaryDiagMatrix(int matrix[][MAX_SIZE_ROWS], size_t size) {

     for (size_t i = 0; i < size; i++) {
        std::cout << matrix[i][size - 1 - i] << " ";
    }
    std::cout << std::endl;
}

int main() {

    unsigned rows;

    do {
        std::cout << "Enter number of rows: " << std::endl;
        std::cin >> rows;
    } while (rows > MAX_SIZE_ROWS);

    int matrix[MAX_SIZE_ROWS][MAX_SIZE_ROWS];
    getMatrix(matrix,rows);

    std::cout<<"Matrix: " << std::endl;
    printMatrix(matrix,rows);

    std::cout<<"Matrix main diag: " << std::endl;
    printMainDiagMatrix(matrix,rows);

    std::cout<<"Matrix secondary diag: " << std::endl;
    printSecondaryDiagMatrix(matrix,rows);

}
