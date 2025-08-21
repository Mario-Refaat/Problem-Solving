#include <iostream>
#include <cmath>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	double x, y, r, n;
	cin >> x >> y >> r >> n;

	while (n--) {
		double xi, yi;
		cin >> xi >> yi;

		if (r >= sqrt(pow(x - xi, 2) + pow(y - yi, 2)))
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}