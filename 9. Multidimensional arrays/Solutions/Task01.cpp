#include <iostream>

const size_t MAX_SIZE_ROWS = 128;

void getMatrix(int matrix[][MAX_SIZE_ROWS], size_t rows, size_t cols) {

    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            std::cout << "Enter matrix ["<<i<<"] ["<<j<<"]: " << std::endl;
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

int getMaxElement(int matrix[][MAX_SIZE_ROWS], size_t rows, size_t cols,
                     size_t& maxIdxR, size_t& maxIdxC) {
    int currMax = matrix[0][0];
    maxIdxR = 0;
    maxIdxC = 0;

    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            if (matrix[i][j] > currMax) {
                currMax = matrix[i][j];
                maxIdxR = i;
                maxIdxC = j;
            }
        }
    }

    return currMax;
}

int getMinElement(int matrix[][MAX_SIZE_ROWS], size_t rows, size_t cols,
                     size_t& minIdxR, size_t& minIdxC) {
    int currMin = matrix[0][0];
    minIdxR = 0;
    minIdxC = 0;

    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            if (matrix[i][j] < currMin) {
                currMin = matrix[i][j];
                minIdxR = i;
                minIdxC = j;
            }
        }
    }

    return currMin;
}

int main() {

    unsigned rows;
    unsigned cols;

    do {
        std::cout << "Enter number of rows: " << std::endl;
        std::cin >> rows;
        std::cout << "Enter number of cols: " << std::endl;
        std::cin >> cols;
    } while (rows > MAX_SIZE_ROWS || cols > MAX_SIZE_ROWS);

    size_t maxIdxR,maxIdxC,minIdxR, minIdxC;;
    int matrix[MAX_SIZE_ROWS][MAX_SIZE_ROWS];
    getMatrix(matrix,rows,cols);

   std::cout << "Max element: " << getMaxElement(matrix,rows,cols,maxIdxR,maxIdxC)
             << " and it's on indexes [" << maxIdxR << "] [" << maxIdxC <<"]"<< std::endl;

    std::cout << "Min element: " << getMinElement(matrix,rows,cols,minIdxR,minIdxC)
             << " and it's on indexes [" << minIdxR << "] [" << minIdxC <<"]"<< std::endl;
}
