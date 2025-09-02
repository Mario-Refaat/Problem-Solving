#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	cout << fixed << setprecision(6) << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

	return 0;
}