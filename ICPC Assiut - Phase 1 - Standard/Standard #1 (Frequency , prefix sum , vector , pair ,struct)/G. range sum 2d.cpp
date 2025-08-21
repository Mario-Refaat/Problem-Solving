#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m, q;
	cin >> n >> m >> q;
	vector<vector<long long>> pref(n + 1, vector<long long>(m + 1));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> pref[i][j];
			pref[i][j] += pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1];
		}
	}

	while (q--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << pref[x2][y2] - pref[x1 - 1][y2] - pref[x2][y1 - 1] + pref[x1 - 1][y1 - 1] << endl;
	}

	return 0;
}
