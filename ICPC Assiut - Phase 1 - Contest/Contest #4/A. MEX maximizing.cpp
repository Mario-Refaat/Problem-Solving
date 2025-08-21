#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		vector<int>freq(5e5, 0);

		long long q, x, y, idx = 0, curr = 1;
		cin >> q >> x;

		while (q--) {
			cin >> y;
			freq[y % x]++;
			while (true) {
				if (idx == x && freq[0] > curr) {
					idx = 0; curr++;
				}
				else if (freq[idx] >= curr)idx++;
				else break;
			}
			cout << x * (curr - 1) + idx << "\n";
		}

	}

	return 0;
}