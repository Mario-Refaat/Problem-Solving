#include <iostream>
#include <cmath>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	double x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	double r1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) * 0.5; // get radius for 2 circle
	double r2 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2)) * 0.5;

	double xi = (x2 + x1) / 2, yi = (y2 + y1) / 2; // get center points for 2 circle
	double xj = (x4 + x3) / 2, yj = (y4 + y3) / 2;

	if (r1 + r2 >= sqrt(pow(xi - xj, 2) + pow(yi - yj, 2))) //check if sum radius >= distance between center
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
