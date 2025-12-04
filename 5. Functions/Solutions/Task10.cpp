#include <iostream>
#include <cmath>

bool isPrimeNum(int num) {
   bool isPrime = num >= 2;

	for (size_t i = 2; i * i <= num; i++) 
	{
		if (num % i == 0)
		{
			isPrime = false;
			break;
		}
	}
  return isPrime;
}


int countPrimeDivisors(int n) {
    int count = 0;

    for (int i = 2; i <= n / 2; i++) { 
        if (n % i == 0 && isPrimeNum(i)) {
            count++;
        }
    }

    if (n > 1 && isPrimeNum(n)) count++;

    return count;
}

int countNumbersWithKPrimeDivisors(int a, int b, int k) {
    int total = 0;
    for (int i = a; i <= b; i++) {
        if (countPrimeDivisors(i) == k) {
            total++;
        }
    }
    return total;
}

int main() {
    int a, b, k;
    std::cout << "Enter a, b, k: ";
    std::cin >> a >> b >> k;

    int result = countNumbersWithKPrimeDivisors(a, b, k);
    std::cout << "Number of integers in [" << a << ", " << b << "] with exactly " 
              << k << " distinct prime divisors: " << result << std::endl;
}
