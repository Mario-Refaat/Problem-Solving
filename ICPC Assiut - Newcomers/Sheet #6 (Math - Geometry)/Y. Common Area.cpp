#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;

	for (int i = 1; i <= t; i++) {

		int Xmin, Ymin, Xmax, Ymax, q;
		cin >> q >> Xmin >> Ymin >> Xmax >> Ymax;
		q--;

		while (q--) {

			int xl, yl, xr, yr;
			cin >> xl >> yl >> xr >> yr;

			Xmin = max(Xmin, xl);
			Ymin = max(Ymin, yl);
			Xmax = min(Xmax, xr);
			Ymax = min(Ymax, yr);

		}

		if (Xmin >= Xmax || Ymin >= Ymax)
			cout << "Case #" << i << ": " << 0 << endl;
		else
			cout << "Case #" << i << ": " << (Xmax - Xmin) * (Ymax - Ymin) << endl;
	}
	return 0;
}
