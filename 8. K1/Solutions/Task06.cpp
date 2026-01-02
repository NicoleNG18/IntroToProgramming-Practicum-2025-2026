#include <iostream>
#include <cstdlib>
#include <ctime>

void splitNumber(int number, int digits[4])
{
    for (int i = 3; i >= 0; i--)
    {
        digits[i] = number % 10;
        number /= 10;
    }
}

int countBulls(int guessDigits[4], int secretDigits[4])
{
    int bulls = 0;
    for (int i = 0; i < 4; i++)
        if (guessDigits[i] == secretDigits[i])
            bulls++;
    return bulls;
}

int countCows(int guessDigits[4], int secretDigits[4])
{
    int cows = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i != j && guessDigits[i] == secretDigits[j])
            {
                cows++;
            }
        }
    }
    return cows;
}

int main()
{
    std::srand(std::time(0));

    int secretNumber = rand() % 9000 + 1000;
    int secretDigits[4];
    splitNumber(secretNumber, secretDigits);
  
    std::cout << "Secret number: " << secretNumber << std::endl;

    int guess;
    while (true)
    {
        std::cout << "Enter a 4-digit number: ";
        std::cin >> guess;

        int guessDigits[4];
        splitNumber(guess, guessDigits);

        if (guess == secretNumber)
        {
            std::cout << "You guessed the number!" << std::endl;
            break;
        }

        int bulls = countBulls(guessDigits, secretDigits);
        int cows = countCows(guessDigits, secretDigits);

        std::cout << bulls << " bull" << (bulls != 1 ? "s" : "") << ", "
                  << cows << " cow" << (cows != 1 ? "s" : "") << std::endl;
    }
}
