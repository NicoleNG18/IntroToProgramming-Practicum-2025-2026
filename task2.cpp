#include <iostream>
using namespace std;
int main() {
    double sum_eu, sum_dollar, sum_yen;
    cin >> sum_eu;
    sum_dollar = sum_eu * 1.1;
    sum_yen = sum_eu * 145;
    cout <<"dollars = " <<sum_dollar << endl;
    cout <<"yen = " <<sum_yen << endl;
}
