#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<int>v(n);
	for (int i = 0; i < n; i++) cin >> v[i];

	long long l = 0, r = 0, res = 1e9, currsum = 0;
	while (l < n) {

		while (r < n && currsum < m) {
			currsum += v[r++];
		}

		if (currsum >= m) res = min(res, r - l);

		currsum -= v[l++];
	}

	cout << (res == 1e9 ? -1 : res);

	return 0;
}