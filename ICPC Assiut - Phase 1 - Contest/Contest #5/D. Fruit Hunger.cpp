#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		int n, q, x, t, b;
		cin >> n >> q;

		set<int>st1, st2;
		vector<int>v(n + 2), pref(1e6), suff(1e6);
		for (int i = 1; i <= n; i++) cin >> v[i];

		for (int i = 1; i <= n; i++) {
			st1.insert(v[i]);
			pref[i] = st1.size();
		}

		for (int i = n; i >= 1; i--) {
			st2.insert(v[i]);
			suff[i] = st2.size();
		}

		while (q--) {
			cin >> t >> b;
			if (t == 1) cout << pref[b] << "\n";
			else cout << suff[b] << "\n";
		}

	}

	return 0;
}