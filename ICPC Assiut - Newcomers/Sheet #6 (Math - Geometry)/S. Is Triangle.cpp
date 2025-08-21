#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	double a, b, c;
	cin >> a >> b >> c;

	if (a + b <= c || a + c <= b || b + c <= a)
		cout << "Invalid";
	else
	{
		double s = (a + b + c) / 2;
		cout << fixed << setprecision(6) << "Valid\n" << sqrt(s * (s - a) * (s - b) * (s - c));
	}
	return 0;
}