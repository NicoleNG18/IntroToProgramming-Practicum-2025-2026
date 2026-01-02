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

bool isUpperTriangular(int matrix[][MAX_SIZE_ROWS], size_t rows) {
    
    for (size_t i = 1; i < rows; i++) {      
        for (size_t j = 0; j < i; j++) {     
            if (matrix[i][j] != 0)
                return false;
        }
    }
    
    return true;
}

int main() {

    unsigned rows;

    do {
        std::cout << "Enter number of rows: " << std::endl;
        std::cin >> rows;
    } while (rows > MAX_SIZE_ROWS);

    int fstMatrix[MAX_SIZE_ROWS][MAX_SIZE_ROWS];
    getMatrix(fstMatrix,rows);
    
     if (isUpperTriangular(fstMatrix, rows))
        std::cout << "Matrix is upper triangular" << std::endl;
     else
        std::cout << "Matrix is not upper triangular" << std::endl;  
}
