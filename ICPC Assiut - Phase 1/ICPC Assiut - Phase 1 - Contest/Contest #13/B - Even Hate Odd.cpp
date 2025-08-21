#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		long long n, x, od = 0, ev = 0;
		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> x;
			if (x & 1)od++;
			else ev++;
		}

		cout << (n & 1 ? -1 : abs(ev - od) / 2) << "\n";

	}

	return 0;
}