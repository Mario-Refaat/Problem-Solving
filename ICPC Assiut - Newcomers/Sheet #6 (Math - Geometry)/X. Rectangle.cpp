#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	double x1, y1, x2, y2, x3, y3, x4, y4, q;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> q;

	double Xmin = min(min(x1, x2), min(x3, x4));
	double Xmax = max(max(x1, x2), max(x3, x4));
	double Ymin = min(min(y1, y2), min(y3, y4));
	double Ymax = max(max(y1, y2), max(y3, y4));

	while (q--) {

		int x, y;
		cin >> x >> y;

		if (x >= Xmin && x <= Xmax && y >= Ymin && y <= Ymax)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}
