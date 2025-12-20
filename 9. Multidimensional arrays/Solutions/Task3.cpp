#include <iostream>

const size_t MAX_SIZE_ROWS = 128;

void getMatrix(int matrix[][MAX_SIZE_ROWS], size_t rows, size_t cols) {

    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            std::cout << "Enter matrix [" << i << "] [" << j << "]: " << std::endl;
            std::cin >> matrix[i][j];
        }
    }

}

void printMatrix(int matrix[][MAX_SIZE_ROWS], size_t rows, size_t cols) {

    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

}

void findX(int matrix[][MAX_SIZE_ROWS], size_t rows, size_t cols) {
    
    std::cout << "Enter x: " << std::endl;
    int x;
    std::cin >> x;
    bool isFound = false;
    
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
           if(x == matrix[i][j]){
               std::cout << "x is: " << x << " on indexes: " << i << " " << j << std::endl;
               matrix[i][j] *= 10;
               std::cout << "Changed x is: " << matrix[i][j] << std::endl;
               isFound = true;
           }
        }
    }
    
    if(!isFound){
      std::cout << "x not found!" << std::endl;
      return;
    }
    
     std::cout << "Matrix: " << std::endl;
     printMatrix(matrix,rows,cols);
}


int main() {

    unsigned rows;
    unsigned cols;

    do {
        std::cout << "Enter number of rows: " << std::endl;
        std::cin >> rows;
        
        std::cout << "Enter number of columns: " << std::endl;
        std::cin >> cols;
    } while (rows > MAX_SIZE_ROWS || cols > MAX_SIZE_ROWS);

    int fstMatrix[MAX_SIZE_ROWS][MAX_SIZE_ROWS];
    getMatrix(fstMatrix,rows,cols);
    
    findX(fstMatrix,rows,cols);
}
