#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		int n, m;
		cin >> n >> m;

		map<int, priority_queue<int, vector<int>, greater<int>> >mp;
		vector<vector<int>>v(n + 1, vector<int>(m + 1));

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cin >> v[i][j];
				mp[i - j].push(v[i][j]);
			}
		}

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cout << mp[i - j].top() << " ";
				mp[i - j].pop();
			}
			cout << "\n";
		}

	}

	return 0;
}