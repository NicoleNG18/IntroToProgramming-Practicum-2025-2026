

#include <iostream>

int main()
{
    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i==j)
            {
                std::cout << "0";
            }
            else if (j>i)
            {
                std::cout << "+";
            }
            else
            {
                std::cout << "-";
            }
        }
        std::cout << "\n";
    }
        
}

