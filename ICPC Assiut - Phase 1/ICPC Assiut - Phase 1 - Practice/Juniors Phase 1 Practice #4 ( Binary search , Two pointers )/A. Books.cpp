#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<int>v(n);
	for (int i = 0; i < n; i++) cin >> v[i];

	int l = 0, r = 0, mx = 0, currmin = 0;

	while (l < n) {

		while (r < n && currmin + v[r] <= m) currmin += v[r++];

		mx = max(mx, r - l);

		currmin -= v[l++];
	}

	cout << mx;

	return 0;
}