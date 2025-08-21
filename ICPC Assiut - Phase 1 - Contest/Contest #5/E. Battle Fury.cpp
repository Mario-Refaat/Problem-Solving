#include <bits/stdc++.h>
using namespace std;

bool can(vector<long long>& v, long long p, long long q, long long hits) {

	long long d = q * hits, sum = 0;

	for (auto e : v) {
		if (e > d) {
			if (p == q) return false;
			e -= d;
			sum += e / (p - q) + (e % (p - q) != 0);
		}
	}

	return sum <= hits;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		long long n, p, q;
		cin >> n >> p >> q;

		vector<long long>v(n);
		for (int i = 0; i < n; i++) cin >> v[i];

		long long l = 1, r = 1e9, ans;
		while (l <= r) {
			long long mid = l + (r - l) / 2;
			if (can(v, p, q, mid)) r = mid - 1, ans = mid;
			else l = mid + 1;
		}

		cout << ans;
	}

	return 0;
}