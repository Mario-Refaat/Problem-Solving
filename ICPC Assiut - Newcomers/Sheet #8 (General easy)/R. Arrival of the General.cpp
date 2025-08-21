#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int x, n, min = INT_MAX, max = INT_MIN, pmin, pmax;
	cin >> n;

	for (int i = 1; i <= n; i++) {

		cin >> x;

		if (x <= min) {
			min = x;
			pmin = i;
		}

		if (x > max) {
			max = x;
			pmax = i;
		}
	}

	cout << (pmax > pmin ? --pmax + n - pmin - 1 : --pmax + n - pmin);

	return 0;
}