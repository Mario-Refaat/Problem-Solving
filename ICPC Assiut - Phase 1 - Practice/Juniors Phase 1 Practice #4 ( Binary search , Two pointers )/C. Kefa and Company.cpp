#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, d;
	cin >> n >> d;

	vector<pair<int, int>>v(n);
	for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
	sort(v.begin(), v.end());

	long long l = 0, r = 0, mx = 0, curr = 0;
	while (l < n) {

		while (r < n && v[r].first - v[l].first < d) curr += v[r++].second;

		mx = max(mx, curr);

		curr -= v[l++].second;
	}

	cout << mx;

	return 0;
}