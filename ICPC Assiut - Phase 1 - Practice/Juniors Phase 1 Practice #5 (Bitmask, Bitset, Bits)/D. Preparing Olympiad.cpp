#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, l, r, x, res = 0;
	cin >> n >> l >> r >> x;

	vector<int>v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	sort(v.begin(), v.end());

	for (int mask = 0; mask < (1 << n); mask++) {
		int total = 0;
		vector<int>sub;
		for (int i = 0; i < n; i++) {
			if (mask & (1 << i)) {
				sub.push_back(v[i]);
				total += v[i];
			}
		}
		res += sub.size() >= 2 && (sub[sub.size() - 1] - sub[0] >= x) && total >= l && total <= r;
	}

	cout << res;

	return 0;
}