#include <iostream>
#include <cmath>
using namespace std;

double calculateDistance(double x1, double y1, double x2, double y2)
{
	double d_x = x2 - x1;
	double d_y = y2 - y1;

	return sqrt(d_x * d_x + d_y * d_y);
}

double trianglePerimeter(int xA, int yA, int xB, int yB, int xC, int yC)
{
	double sideAB = calculateDistance(xA, yA, xB, yB);
	double sideBC = calculateDistance(xB, yB, xC, yC);
	double sideCA = calculateDistance(xC, yC, xA, yA);

	return sideAB + sideBC + sideCA;
}

int main()
{
	int xA, yA, xB, yB, xC, yC;
	cin >> xA >> yA >> xB >> yB >> xC >> yC;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << trianglePerimeter(xA, yA, xB, yB, xC, yC);

	return 0;
}