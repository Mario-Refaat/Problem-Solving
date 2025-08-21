#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	double x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	// if slope 2 lines are equal (y4-y3)/(x4-x3) == (y2-y1)/(x2-x1) but using * to avoid division by 0
	cout << ((y4 - y3) * (x2 - x1) == (y2 - y1) * (x4 - x3) ? "YES" : "NO");  

	return 0;
}
