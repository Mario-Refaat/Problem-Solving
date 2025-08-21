#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	cout << ((y3 - y1) * (x3 - x2) == (y3 - y2) * (x3 - x1) ? "YES" : "NO"); // " slope point 1 , point 2 == slope p 1 , p 3 "

	return 0;
}
