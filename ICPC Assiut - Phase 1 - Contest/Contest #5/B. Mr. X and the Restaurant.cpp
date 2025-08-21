#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		int n, m, x;
		cin >> n >> m;

		vector<int>v(n);
		set<int>st;
		for (int i = 0; i < n; i++) cin >> v[i];
		for (int i = 0; i < m; i++) { cin >> x; st.insert(x); }

		map<int, int>mp;
		int mn = 1e9, currhate = 0, l = 0, r = 0;

		while (l < n) {

			while (r < n && mp.size() < m) {
				if (st.count(v[r]))mp[v[r]]++;
				else currhate++;
				r++;
			}

			if (mp.size() == m) mn = min(mn, currhate);

			if (st.count(v[l])) {
				if (mp[v[l]] == 1) mp.erase(v[l]);
				else mp[v[l]]--;
			}
			else {
				currhate--;
			}

			l++;
		}

		cout << mn;

	}

	return 0;
}