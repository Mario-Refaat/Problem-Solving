#include <bits/stdc++.h>
using namespace std;

bool can(vector<int>& v1, vector<int>& v2, long long k, long long num) {

	long long mg = 0;
	for (int i = 0; i < v1.size(); i++) {
		mg += max(0LL, v1[i] * num - v2[i]);
		if (mg > k) break;
	}

	return mg <= k;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	vector<int> v1(n), v2(n);
	for (int i = 0; i < n; i++) cin >> v1[i];
	for (int i = 0; i < n; i++) cin >> v2[i];


	long long l = 0, r = 2e9, ans;
	while (l <= r) {
		long long mid = l + (r - l) / 2;
		if (can(v1, v2, k, mid)) ans = mid, l = mid + 1;
		else r = mid - 1;
	}

	cout << ans;

	return 0;
}