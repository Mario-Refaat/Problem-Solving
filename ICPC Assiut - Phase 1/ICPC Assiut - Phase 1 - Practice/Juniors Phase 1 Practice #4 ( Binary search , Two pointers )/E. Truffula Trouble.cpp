#include <bits/stdc++.h>
using namespace std;

bool can(vector<int>& v, long long k, long long p) {

	long long curr = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] <= p) { curr++; i++; p--; }
	}

	return curr >= k;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];

	long long l = 1, r = 1e14, ans = -1;
	while (l <= r) {
		long long mid = l + (r - l) / 2;
		if (can(v, k, mid)) ans = mid, r = mid - 1;
		else l = mid + 1;
	}

	cout << ans;

	return 0;
}