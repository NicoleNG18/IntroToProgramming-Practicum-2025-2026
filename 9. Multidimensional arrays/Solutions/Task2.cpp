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

void transposeMatrix(int matrix[][MAX_SIZE_ROWS], size_t size) {
    
    for (size_t i = 0; i < size; i++) {
        for (size_t j = i+1; j < size; j++) {
           int temp = matrix[i][j];
           matrix[i][j]=matrix[j][i];
           matrix[j][i]=temp;
        }
    }
   
}


int main() {

    unsigned rows;

    do {
        std::cout << "Enter number of rows: " << std::endl;
        std::cin >> rows;
    } while (rows > MAX_SIZE_ROWS);

    int fstMatrix[MAX_SIZE_ROWS][MAX_SIZE_ROWS];
    getMatrix(fstMatrix,rows);
    
    transposeMatrix(fstMatrix,rows);
    std::cout << "Transponated matrix: " << std::endl;
    printMatrix(fstMatrix,rows);
}
