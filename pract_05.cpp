#include <iostream>

//task 00
//long long toBinaryAsNumber(long long n) {
//    if (n == 0) return 0;
//    long long res = 0, place = 1;
//    while (n > 0) {
//        int bit = n % 2;
//        res += bit * place;
//        place *= 10;
//        n /= 2;
//    }
//    return res;
//}
//
//int main() {
//    long long n;
//    std::cin >> n;
//    std::cout << toBinaryAsNumber(n);
//    return 0;
//}

//task 01
//bool isDigit(char c) { return c >= '0' && c <= '9'; }
//bool isUpper(char c) { return c >= 'A' && c <= 'Z'; }
//bool isLower(char c) { return c >= 'a' && c <= 'z'; }
//bool isAlpha(char c) { return isUpper(c) || isLower(c); }
//bool isAlnum(char c) { return isAlpha(c) || isDigit(c); }
//
//char capitalize(char c) {
//    if (isLower(c)) return char(c - ('a' - 'A'));
//    return c;
//}
//
//char makeLower(char c) {
//    if (isUpper(c)) return char(c + ('a' - 'A'));
//    return c;
//}
//
//int parseInt(char c) {
//    if (!isDigit(c)) return -1;
//    return c - '0';
//}
//
//char toChar(int x) {
//    if (x < 0 || x > 255) return '\0';
//    return char(x);
//}
//
//int myLog(int n, int base) {
//    if (n < 1 || base < 2) return -1;
//    int cnt = 0, cur = 1;
//    while (cur * base <= n) {
//        if (cur > n / base) break;
//        cur *= base;
//        cnt++;
//    }
//    return cnt;
//}
//
//long long myPow(long long a, int e) {
//    if (e < 0) return 0;
//    long long res = 1;
//    while (e > 0) {
//        if (e % 2 == 1) res *= a;
//        a *= a;
//        e /= 2;
//    }
//    return res;
//}
//
//double myCeil(double x) {
//    long long xi = (long long)x;
//    if (x > 0) return (x == xi) ? xi : xi + 1;
//    else return xi;
//}
//
//double myFloor(double x) {
//    long long xi = (long long)x;
//    if (x >= 0) return xi;
//    else return (x == xi) ? xi : xi - 1;
//}
//
//double myAbs(double x) { return x < 0 ? -x : x; }
//
//int main() {
//    
//    std::cout << isDigit('5') << " " << isUpper('Z') << " " << isLower('a') << "\n";
//    std::cout << capitalize('b') << " " << makeLower('K') << "\n";
//    std::cout << parseInt('9') << " " << toChar(65) << "\n";
//    std::cout << myLog(1024, 2) << " " << myPow(3, 4) << "\n";
//    std::cout << myCeil(4.2) << " " << myFloor(4.8) << " " << myAbs(-7.5) << "\n";
//    return 0;
//}

//task 02
//long long reverseNumber(long long n) {
//    long long res = 0;
//    while (n > 0) {
//        int d = n % 10;
//        res = res * 10 + d;
//        n /= 10;
//    }
//    return res;
//}
//
//int main() {
//    long long n;
//    std::cin >> n;
//    std::cout << reverseNumber(n);
//    return 0;
//}

//task 03
//int countDigits(long long n) {
//    if (n == 0) return 1;
//    if (n < 0) n = -n;
//    int cnt = 0;
//    while (n > 0) {
//        cnt++;
//        n /= 10;
//    }
//    return cnt;
//}
//
//int main() {
//    long long n;
//    std::cin >> n;
//    std::cout << countDigits(n);
//    return 0;
//}

//task 04
//int sortDigitsDesc(int n) {
//    int result = 0;
//
//    
//    for (int digit = 9; digit >= 0; digit--) {
//        int temp = n;
//        while (temp > 0) {
//            if (temp % 10 == digit)
//                result = result * 10 + digit;
//            temp /= 10;
//        }
//    }
//
//    return result;
//}
//
//int main() {
//    int n;
//    std::cin >> n;
//    std::cout << sortDigitsDesc(n);
//    return 0;
//}

//task 05
//bool onSameCircle(int a, int b, int c, int d) {
//    int r1 = a * a + b * b;
//    int r2 = c * c + d * d;
//    return r1 == r2;
//}
//
//int main() {
//    int a, b, c, d;
//    std::cin >> a >> b >> c >> d;
//
//    if (onSameCircle(a, b, c, d))
//        std::cout << "yes";
//    else
//        std::cout << "no";
//
//    return 0;
//}

//task 06
//int square(int x) {
//    return x * x;
//}
//
//int sumOfSquares(int n) {
//    int sum = 0;
//    for (int i = 1; i <= n; i++) {
//        sum += square(i);
//    }
//    return sum;
//}
//
//int main() {
//    int n;
//    std::cin >> n;
//    std::cout << sumOfSquares(n);
//    return 0;
//}

//task 07
//int removeHundredsDigit(int x) {
//    int thousands = x / 1000;
//    int tensAndOnes = x % 100;     
//    int newNumber = thousands * 100 + tensAndOnes;
//    return newNumber;
//}
//
//void findNumbers(int m, int n) {
//    bool found = false;
//    for (int i = m; i <= n; i++) {
//        if (i >= 1000 && i <= 9999)
//        {       
//            int newNum = removeHundredsDigit(i);
//            if (newNum % 11 == 0) {
//                std::cout << i << " ";
//                found = true;
//            }
//        }
//    }
//    if (!found)
//        std::cout << "No such a number!";
//}
//
//int main() {
//    int m, n;
//    std::cin >> m >> n;
//    findNumbers(m, n);
//    return 0;
//}

//task 08
//long long mixNums(long long a, long long b) {
//    long long result = 0;
//    long long multiplier = 1;
//
//    while (a > 0 || b > 0) {
//        if (a > 0) {
//            int digitA = a % 10;
//            result += digitA * multiplier;
//            multiplier *= 10;
//            a /= 10;
//        }
//        if (b > 0) {
//            int digitB = b % 10;
//            result += digitB * multiplier;
//            multiplier *= 10;
//            b /= 10;
//        }
//    }
//
//    return result;
//}
//
//int main() {
//    long long a, b;
//    std::cin >> a >> b;
//    std::cout << mixNums(a, b);
//    return 0;
//}

//task 09
//#include <cmath>
//double distance(int x1, int y1, int x2, int y2) {
//    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
//}
//
//double trianglePerimeter(int x1, int y1, int x2, int y2, int x3, int y3) {
//    double a = distance(x1, y1, x2, y2);
//    double b = distance(x2, y2, x3, y3);
//    double c = distance(x3, y3, x1, y1);
//    return a + b + c;
//}
//
//int main() {
//    int x1, y1, x2, y2, x3, y3;
//    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//    std::cout << trianglePerimeter(x1, y1, x2, y2, x3, y3);
//    return 0;
//}

//task 10
//bool isPrime(int n) {
//    if (n < 2) return false;
//    for (int i = 2; i * i <= n; i++) {
//        if (n % i == 0) return false;
//    }
//    return true;
//}
//
//int primeDivisorsCount(int n) {
//    int count = 0;
//    for (int i = 2; i <= n; i++) {
//        if (isPrime(i) && n % i == 0) {
//            count++;
//            while (n % i == 0) n /= i;
//        }
//    }
//    return count;
//}
//
//int main() {
//    int a, b, k, result = 0;
//    std::cin >> a >> b >> k;
//    for (int i = a; i <= b; i++) {
//        if (primeDivisorsCount(i) == k)
//            result++;
//    }
//    std::cout << result;
//    return 0;
//}

//task 11
//bool isEven(int n) {
//    return n % 2 == 0;
//}
//
//int sumOfDigits(int n) {
//    int sum = 0;
//    while (n > 0) {
//        sum += n % 10;
//        n /= 10;
//    }
//    return sum;
//}
//
//int prodOfDigits(int n) {
//    int prod = 1;
//    if (n == 0) return 0;
//    while (n > 0) {
//        prod *= n % 10;
//        n /= 10;
//    }
//    return prod;
//}
//
//bool isPalindrome(int n) {
//    int original = n;
//    int reversed = 0;
//    while (n > 0) {
//        int d = n % 10;
//        reversed = reversed * 10 + d;
//        n /= 10;
//    }
//    return original == reversed;
//}
//
//int main() {
//    int n;
//    std::cin >> n;
//
//    std::cout << "Is even: " << (isEven(n) ? "true" : "false") << "\n";
//    std::cout << "Sum of digits: " << sumOfDigits(n) << "\n";
//    std::cout << "Prod of digits: " << prodOfDigits(n) << "\n";
//    std::cout << "Is Palindrome: " << (isPalindrome(n) ? "true" : "false") << "\n";
//
//    return 0;
//}