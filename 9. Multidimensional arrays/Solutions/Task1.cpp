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

void  sumMatrixes(int fstMatrix[][MAX_SIZE_ROWS], int sndMatrix[][MAX_SIZE_ROWS], int resMatrix[][MAX_SIZE_ROWS], size_t size) {

   for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size; j++) {
            resMatrix[i][j] = fstMatrix[i][j] + sndMatrix[i][j];
        }
    }
    
}

void  subtractMatrices(int fstMatrix[][MAX_SIZE_ROWS], int sndMatrix[][MAX_SIZE_ROWS], int resMatrix[][MAX_SIZE_ROWS], size_t size) {
    
for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size; j++) {
            resMatrix[i][j] = fstMatrix[i][j] - sndMatrix[i][j];
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
    
    int sndMatrix[MAX_SIZE_ROWS][MAX_SIZE_ROWS];
    getMatrix(sndMatrix,rows);
    
    int resSumMatrix[MAX_SIZE_ROWS][MAX_SIZE_ROWS];
    int resSubMatrix[MAX_SIZE_ROWS][MAX_SIZE_ROWS];

    sumMatrixes(fstMatrix,sndMatrix,resSumMatrix,rows);
    std::cout << "Sum matrix: " << std::endl;
    printMatrix(resSumMatrix,rows);
    
    subtractMatrices(fstMatrix,sndMatrix,resSubMatrix,rows);
    std::cout << "Sub matrix: " << std::endl;
    printMatrix(resSubMatrix,rows);
}
