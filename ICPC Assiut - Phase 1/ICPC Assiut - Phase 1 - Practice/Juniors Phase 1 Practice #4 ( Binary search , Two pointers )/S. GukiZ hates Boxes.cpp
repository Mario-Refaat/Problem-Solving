#include <bits/stdc++.h>
using namespace std;

bool can(vector<int>v, int m, long long t) {

	long long nonzero = 0;
	for (int i = v.size() - 1; i >= 0; i--)
		if (v[i] > 0) { nonzero = i; break; }

	while (m-- && nonzero >= 0) {
		long long temp = t - nonzero - 1;
		while (nonzero >= 0) {
			if (temp >= v[nonzero]) temp -= v[nonzero], nonzero--;
			else { v[nonzero] -= temp; break; }
		}
	}

	return nonzero < 0;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<int>v(n);
	for (int i = 0; i < n; i++) cin >> v[i];

	long long l = 0, r = 1e15, ans;
	while (l <= r) {

		long long mid = l + (r - l) / 2;
		if (can(v, m, mid)) ans = mid, r = mid - 1;
		else l = mid + 1;
	}

	cout << ans;

	return 0;
}