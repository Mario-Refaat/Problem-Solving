#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector<long long>tr; //precompute
	long long num = 0;
	for (int i = 1; num <= 1e9; i++) {
		num += i;
		tr.push_back(num);
	}

	int t = 1;
	cin >> t;

	while (t--) {

		long long l, r, res = 0;
		cin >> l >> r;

		for (int i = 0; tr[i] < r; i++) {

			auto st = lower_bound(tr.begin(), tr.end(), max(l - tr[i], tr[i]));
			auto ed = upper_bound(tr.begin(), tr.end(), r - tr[i]);

			res += max((int)(ed - st), 0);
		}

		cout << res << "\n";
	}

	return 0;
}