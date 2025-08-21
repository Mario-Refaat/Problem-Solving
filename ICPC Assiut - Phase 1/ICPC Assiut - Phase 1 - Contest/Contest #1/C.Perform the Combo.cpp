#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		int n, m, x;
		string s;
		cin >> n >> m >> s;

		vector<int>suff(n + 2, 0), res(26, 0);
		for (int i = 0; i < m; i++) { cin >> x; suff[x - 1]++; }
		for (int i = n; i >= 0; i--) suff[i] += suff[i + 1];

		for (int i = 0; i < n; i++) {
			res[s[i] - 'a'] += suff[i] + 1;
		}

		for (auto e : res) cout << e << " ";
		cout << "\n";

	}

	return 0;
}
