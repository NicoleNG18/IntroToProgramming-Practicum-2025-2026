#include <iostream>
 
const unsigned MAX_ROWS_SIZE = 128;

void getMatrix(int matrix[][MAX_ROWS_SIZE], size_t size) {

    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size; j++) {
            std::cout << "Enter matrix [" << i << "] [" << j << "]: " << std::endl;
            std::cin >> matrix[i][j];
        }
    }
 
}

void collectSums(const int mtx[][MAX_ROWS_SIZE], size_t size,
                 int rows[], int cols[],
                 int& diag1, int& diag2)
{
    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size; j++) {
            rows[i] += mtx[i][j];
            cols[j] += mtx[i][j];

            if (i == j) diag1 += mtx[i][j];
            if (i + j == size - 1) diag2 += mtx[i][j];
        }
    }
}

bool allEqual(const int arr[], size_t size, int value)
{
    for (size_t i = 0; i < size; i++)
        if (arr[i] != value)
            return false;

    return true;
}
 
bool isMagicSquare(const int mtx[][MAX_ROWS_SIZE], size_t size)
{
    int rows[MAX_ROWS_SIZE] = {0};
    int cols[MAX_ROWS_SIZE] = {0};
    int d1 = 0, d2 = 0;

    collectSums(mtx, size, rows, cols, d1, d2);

    int magic = rows[0];

    return allEqual(rows, size, magic) &&
           allEqual(cols, size, magic) &&
           d1 == magic &&
           d2 == magic;
}
 
int main()
{
    int matrix[MAX_ROWS_SIZE][MAX_ROWS_SIZE];
    size_t size;
 
    do {
        std::cout << "Enter matrix size: ";
        std::cin >> size;
    } while (size < 1 || size > MAX_ROWS_SIZE);

    getMatrix(matrix, size);
 
    std::cout << std::boolalpha << isMagicSquare(matrix, size);
}
