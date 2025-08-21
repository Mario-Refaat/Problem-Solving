#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, q, x;
	cin >> n;

	vector<long long>v(n + 1), pref(n + 1);
	for (int i = 1; i <= n; i++) cin >> v[i];
	sort(v.begin(), v.end());

	for (int i = 1; i <= n; i++) pref[i] += pref[i - 1] + v[i];

	cin >> q;
	while (q--) {
		cin >> x;
		auto it = upper_bound(v.begin(), v.end(), x) - v.begin();
		if (it == 1) cout << -1 << "\n";
		else cout << it - 1 << " " << pref[it - 1] << "\n";
	}

	return 0;
}