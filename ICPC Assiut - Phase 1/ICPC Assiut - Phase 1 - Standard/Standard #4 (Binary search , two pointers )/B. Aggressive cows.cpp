#include <bits/stdc++.h>
using namespace std;

bool can(vector<int>& v, int c, int dis) {

	int last = v[0], curr = 1;
	for (int i = 1; i < v.size(); i++) {
		if (v[i] - last >= dis) {
			curr++;
			last = v[i];
		}
	}

	return curr >= c;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, c;
	cin >> n >> c;

	vector<int>v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	sort(v.begin(), v.end());

	int l = 0, r = 1e9, ans;

	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (can(v, c, mid)) ans = mid, l = mid + 1;
		else r = mid - 1;
	}

	cout << ans;

	return 0;
}