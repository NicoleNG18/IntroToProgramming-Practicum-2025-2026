#include <iostream>

const unsigned MAX_SIZE = 128;

void getMatrix(int matrix[][MAX_SIZE], size_t rows, size_t cols) {
    for (size_t i = 0; i < rows; i++)
        for (size_t j = 0; j < cols; j++)
            std::cin >> matrix[i][j];
}

void printMatrix(int matrix[][MAX_SIZE], size_t rows, size_t cols) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++)
            std::cout << matrix[i][j] << " ";
        std::cout << std::endl;
    }
}

bool multiplyMatrixes(int A[][MAX_SIZE], size_t r1, size_t c1,
                      int B[][MAX_SIZE], size_t r2, size_t c2,
                      int result[][MAX_SIZE]) 
{
    if (c1 != r2)
        return false;

    for (size_t i = 0; i < r1; i++) {
        for (size_t j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (size_t k = 0; k < c1; k++)
                result[i][j] += A[i][k] * B[k][j];
        }
    }

    return true;
}

int main() {
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], C[MAX_SIZE][MAX_SIZE];
    size_t r1, c1, r2, c2;

    do {
        std::cout << "Enter rows and columns of first matrix (1-" << MAX_SIZE << "): ";
        std::cin >> r1 >> c1;
    } while (r1 < 1 || r1 > MAX_SIZE || c1 < 1 || c1 > MAX_SIZE);

    std::cout << "Enter first matrix: " << std::endl;
    getMatrix(A, r1, c1);

    do {
        std::cout << "Enter rows and columns of second matrix (1-" << MAX_SIZE << "): ";
        std::cin >> r2 >> c2;
    } while (r2 < 1 || r2 > MAX_SIZE || c2 < 1 || c2 > MAX_SIZE);
    
    std::cout << "Enter second matrix: " << std::endl;
    getMatrix(B, r2, c2);

    if (multiplyMatrixes(A, r1, c1, B, r2, c2, C)) {
        std::cout << "Resulting matrix: " << std::endl;
        printMatrix(C, r1, c2);
    } else {
        std::cout << "Matrix multiplication is not possible. " << std::endl;
    }
}
