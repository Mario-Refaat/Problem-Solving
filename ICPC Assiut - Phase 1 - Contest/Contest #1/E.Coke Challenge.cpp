#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		int n, k, a, mn = INT_MAX;
		cin >> n >> k >> a;

		for (int i = 0; i < n; i++) {
			int x, y, curr = 0, r = k;
			cin >> x >> y;

			while (r) {
				if (x * a >= r) { curr += r / a; break; }
				curr += x + y;
				r -= x * a;
			}

			mn = min(mn, curr);
		}

		cout << mn;
	}

	return 0;
}
