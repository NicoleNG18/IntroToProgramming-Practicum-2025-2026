/*
Задача: Следене на резултатите на отбори с динамична матрица

Описание:

1. Създайте програма, която следи резултатите на няколко отбора.
   - Всеки отбор има различен брой играчи.
   - Всеки играч има индивидуални точки.
   - Всеки отбор има общи точки, равни на сумата от точките на неговите играчи.

2. Динамична матрица:
   - Всеки ред представлява един отбор.
   - mtx[i][0] = индекс на отбора (team ID)
   - mtx[i][1] = брой играчи в отбора
   - mtx[i][2] = текуща сума на точките на отбора
   - mtx[i][3..n] = точки на отделните играчи

3. Вход от потребителя:
   - Брой отбори
   - Брой играчи за всеки отбор
   - Брой актуализации (updates)
   - За всяка актуализация: индекс на отбор, индекс на играч, добавени точки

4. Логика на програмата:
   - Добавяне на точки на даден играч в даден отбор.
   - Актуализиране на общите точки на отбора.
   - След всяка актуализация, пренареждане на редовете на матрицата по общите точки на отбора (низходящ ред).
   - Печат на точките на всички играчи и общата сума на всеки отбор след всяка актуализация.

5. Изход:
   - След всяка актуализация се отпечатва текущото състояние на всички отбори.
   - След всички актуализации се отпечатват финалните класирания.

6. Допълнителни изисквания:
   - Използвайте **динамична памет** (new/delete) и указатели.
   - Правете проверки за валидност на индексите при добавяне на точки.

Примерен вход/изход:

Вход:
Enter number of teams: 2
Enter number of players for team 0: 3
Enter number of players for team 1: 2
Enter number of updates: 3
Update 1 (team player points): 0 1 5
Update 2 (team player points): 1 0 3
Update 3 (team player points): 0 2 2

Изход след всяка актуализация:
Teams' points:
Team 0: 0 5 0 (Total: 5)
Team 1: 0 0 (Total: 0)

Teams' points:
Team 0: 0 5 0 (Total: 5)
Team 1: 3 0 (Total: 3)

Teams' points:
Team 0: 0 5 2 (Total: 7)
Team 1: 3 0 (Total: 3)

Final standings:
Team 0: 0 5 2 (Total: 7)
Team 1: 3 0 (Total: 3)
*/

#include <iostream>

int** createMatrix(size_t teams)
{
    int** mtx = new int* [teams];
    for (size_t i = 0; i < teams; i++)
    {
        size_t players;
        std::cout << "Enter number of players for team " << i << ": ";
        std::cin >> players;

        // проверка за валидност на броя играчи
        if (players == 0) {
            std::cout << "Each team must have at least one player." << std::endl;
            i--;
            continue;
        }

        mtx[i] = new int[players + 3]{0};
        // индекс на отбора
        mtx[i][0] = i;
        // брой играчи
        mtx[i][1] = players;
    }

    return mtx;
}

void freeMatrix(int** matrix, size_t teams)
{
    for (size_t i = 0; i < teams; i++)
        delete[] matrix[i];
    delete[] matrix;
}

void print(int** mtx, size_t teams)
{
    std::cout << "Teams' points: " << std::endl;
    for (size_t i = 0; i < teams; i++)
    {
        size_t players = mtx[i][1];
        std::cout << "Team " << mtx[i][0] << ": ";

        for (size_t j = 0; j < players; j++)
            std::cout << mtx[i][3 + j] << ' ';

        std::cout << "(Total: " << mtx[i][2] << ") " << std::endl;
    }
    std::cout << std::endl;
}

void swapRows(int*& a, int*& b)
{
    int* temp = a;
    a = b;
    b = temp;
}

void reorderTeams(int** mtx, size_t row)
{
    while (row > 0 && mtx[row][2] > mtx[row - 1][2])
    {
        swapRows(mtx[row], mtx[row - 1]);
        row--;
    }
}

void addPoints(int** mtx, size_t teamsCount, size_t teamIndex, size_t player, int pts)
{
    // проверка на валиден отбор
    int currRow = -1;
    for (size_t row = 0; row < teamsCount; row++)
    {
        if (mtx[row][0] == teamIndex) {
            currRow = row;
            break;
        }
    }
    if (currRow == -1) {
        std::cout << "Invalid team index: " << teamIndex << std::endl;
        return;
    }

    // проверка на валиден играч
    if (player >= (size_t)mtx[currRow][1]) {
        std::cout << "Invalid player index: " << player << " for team " << teamIndex << std::endl;
        return;
    }

    // точки на играча
    mtx[currRow][3 + player] += pts;
    // актуализиране на общите точки
    mtx[currRow][2] += pts;
    // пренареждане по точки
    reorderTeams(mtx, currRow);
}

int main()
{
    size_t teamsCount;
    std::cout << "Enter number of teams: ";
    std::cin >> teamsCount;

    if (teamsCount == 0) {
        std::cout << "Number of teams must be at least 1." << std::endl;
        return 1;
    }

    int** mtx = createMatrix(teamsCount);

    size_t queries;
    std::cout << "Enter number of updates: ";
    std::cin >> queries;

    for (size_t i = 0; i < queries; i++)
    {
        size_t team, player;
        int points;
        std::cout << "Update " << i + 1 << " (team player points): ";
        std::cin >> team >> player >> points;

        addPoints(mtx, teamsCount, team, player, points);
        print(mtx, teamsCount);
    }

    std::cout << "Final standings:" << std::endl;
    print(mtx, teamsCount);

    freeMatrix(mtx, teamsCount);
}
