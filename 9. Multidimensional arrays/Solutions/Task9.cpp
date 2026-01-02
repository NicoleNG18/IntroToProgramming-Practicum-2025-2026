#include <iostream>

const unsigned MAX_SIZE = 128;

void getMatrix(int matrix[][MAX_SIZE], size_t rows, size_t cols) {
    std::cout << "Enter matrix elements:" << std::endl;
    for (size_t i = 0; i < rows; i++)
        for (size_t j = 0; j < cols; j++)
            std::cin >> matrix[i][j];
}

void printSpiral(int matrix[][MAX_SIZE], size_t rows, size_t cols) {
    size_t top = 0, bottom = rows - 1;
    size_t left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {

        for (size_t j = left; j <= right; j++)
            std::cout << matrix[top][j] << " ";
        top++;

        for (size_t i = top; i <= bottom; i++)
            std::cout << matrix[i][right] << " ";
        if (right == 0) break; 
        right--;
        
        if (top <= bottom) {
            for (size_t j = right + 1; j-- > left; )
                std::cout << matrix[bottom][j] << " ";
            bottom--;
        }

        if (left <= right) {
            for (size_t i = bottom + 1; i-- > top; )
                std::cout << matrix[i][left] << " ";
            left++;
        }
    }
    std::cout << std::endl;
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    size_t rows, cols;

    do{
    std::cout << "Enter number of rows and columns: ";
    std::cin >> rows >> cols;
    } while( rows > MAX_SIZE || cols > MAX_SIZE);
    
    getMatrix(matrix, rows, cols);

    std::cout << "Spiral order: ";
    printSpiral(matrix, rows, cols);
}
