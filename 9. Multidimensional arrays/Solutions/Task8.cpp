#include <iostream>

const unsigned MAX_SIZE = 128;

void getMatrix(int matrix[][MAX_SIZE], size_t n) {
    for (size_t i = 0; i < n; i++)
        for (size_t j = 0; j < n; j++)
            std::cin >> matrix[i][j];
}

void printMatrix(int matrix[][MAX_SIZE], size_t n) {
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++)
            std::cout << matrix[i][j] << " ";
        std::cout << std::endl;
    }
}

void rotate90Clockwise(int matrix[][MAX_SIZE], size_t n, int result[][MAX_SIZE]) {
    for (size_t i = 0; i < n; i++)
        for (size_t j = 0; j < n; j++)
            result[j][n - 1 - i] = matrix[i][j];
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE], rotated[MAX_SIZE][MAX_SIZE];
   
    size_t size;
    
     do {
        std::cout << "Enter matrix size: " << std::endl;
        std::cin >> size;
    } while (size < 1 || size > MAX_SIZE);
    
    getMatrix(matrix, size);

    rotate90Clockwise(matrix, size, rotated);

    printMatrix(rotated, size);
}
