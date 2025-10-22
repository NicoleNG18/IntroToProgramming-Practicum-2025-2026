#include <iostream>

int main () {

    int number, interval1, interval2;
    std:: cin >> number >> interval1 >> interval2;

    bool checkInterval = (interval1 <= number && number <= interval2);
    std::cout << std::boolalpha << checkInterval;

}