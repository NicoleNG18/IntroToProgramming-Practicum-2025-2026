#include <iostream> 
using namespace std;

int main ()
{
    double L_interval1, R_interval1, L_interval2, R_interval2, intersect;
    int noif = 0;

    cout << "Please enter values of first interval" << endl;
    cin >> L_interval1 >> R_interval1;

    cout << "Please enter values of second interval" << endl;
    cin >> L_interval2 >> R_interval2;

    // Разглеждам четирите логични начина интервалите да се пресичат ( броя съвпадането като        пресичане)
     bool case1 = bool(L_interval1 <= L_interval2 && L_interval2 <= R_interval1 && R_interval1 <= R_interval2);
     bool case2 = bool(L_interval1 <= L_interval2 && L_interval2 <= R_interval2 && R_interval2 <= R_interval1);
     bool case3 = bool(L_interval2 <= L_interval1 && L_interval1 <= R_interval1 && R_interval1 <= R_interval2);
     bool case4 = bool(L_interval2 <= L_interval1 && L_interval1 <= R_interval2 && R_interval2 <= R_interval1); 

    noif = case1 + case2 + case3 + case4;
    cout << "The two intervals intersect: " << boolalpha << (noif!=0) << endl;

    return 0;
}