#include <iostream>
using namespace std;

void onSameCircle(long long a, long long b, long long c, long long d)
{
	long long D1_sq = a * a + b * b;
	long long D2_sq = c * c + d * d;

	if (D1_sq == D2_sq)
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
}

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	onSameCircle(a, b, c, d);

	return 0;
}