#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		int n;
		cin >> n;

		vector<vector<int>>v(n + 1, vector<int>(26, 0));
		for (int i = 1; i <= n; i++) {
			string s;
			cin >> s;
			for (auto e : s) v[i][e - 'a']++;
		}

		string res;
		for (int i = 1; i <= n / 2; i++) {
			for (int j = 0; j < 26; j++) {
				if (v[i][j] && v[n - i + 1][j]) {
					res += (char)(j + 'a'); break;
				}
			}
			if (res.size() != i) { cout << -1; return 0; }
		}

		cout << res;
		if (n & 1) for (int i = 0; i < 26; i++) if (v[n / 2 + 1][i]) { cout << (char)(i + 'a'); break; }
		reverse(res.begin(), res.end());
		cout << res;
	}

	return 0;
}