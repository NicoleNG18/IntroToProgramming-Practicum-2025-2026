#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(unsigned int num) {
    if (num < 2) {
        return false;
    }

    if (num == 2) {
        return true;
    }

    for (unsigned int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

unsigned int primeDivisorsCount(unsigned int num) {
    unsigned int count = 0;
    for (unsigned int i = 2; i <= num; i++) {
        if (isPrime(i) && num % i == 0) {
            count++;
        }
    }

    return count;
}

unsigned int kPrimeDivisorsInRange(unsigned int a, unsigned int b, unsigned int k) {
    unsigned int count = 0;

    for (unsigned int i = a; i <= b; i++) {
        if (primeDivisorsCount(i) == k) {
            count++;
        }
    }

    return count;
}

int main() {
    cout << kPrimeDivisorsInRange(1, 10, 2) << endl;
    cout << kPrimeDivisorsInRange(10, 20, 2) << endl;
}