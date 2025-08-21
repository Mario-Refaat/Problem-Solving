#include <bits/stdc++.h>
using namespace std;

bool can(vector<long long>v, long long k, long long s) {

	long long cost = 0;
	for (int i = 0; i < v.size(); i++) v[i] += (i + 1) * k;
	sort(v.begin(), v.end());

	for (int i = 0; i < k; i++) cost += v[i];

	return cost <= s;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, s;
	cin >> n >> s;

	vector<long long>v(n);
	for (int i = 0; i < n; i++) cin >> v[i];

	long long l = 0, r = n, ans, cost = 0;
	while (l <= r) {

		long long mid = l + (r - l) / 2;
		if (can(v, mid, s)) ans = mid, l = mid + 1;
		else r = mid - 1;

	}

	for (int i = 0; i < v.size(); i++) v[i] += (i + 1) * ans;
	sort(v.begin(), v.end());
	for (int i = 0; i < ans; i++) cost += v[i];

	cout << ans << " " << cost;

	return 0;
}