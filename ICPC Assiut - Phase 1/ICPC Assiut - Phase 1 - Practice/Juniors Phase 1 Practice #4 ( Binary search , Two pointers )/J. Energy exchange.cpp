#include <bits/stdc++.h>
using namespace std;

bool can(vector<double>& v, double k, double e) {

	double need = 0, have = 0;

	for (int i = 0; i < v.size(); i++) {
		if (v[i] >= e) have += (v[i] - e) - ((v[i] - e) * k / 100);
		else need += e - v[i];
	}

	return have >= need;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	double n, k;
	cin >> n >> k;

	vector<double>v(n);
	for (int i = 0; i < n; i++) cin >> v[i];

	double l = 0, r = 1e5, ans;
	while (r - l >= 1e-7) {

		double mid = l + (r - l) / 2;
		if (can(v, k, mid)) ans = mid, l = mid;
		else r = mid;

	}

	cout << fixed << setprecision(6) << ans;

	return 0;
}