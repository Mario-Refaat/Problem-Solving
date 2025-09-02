#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m, q;
	cin >> n >> m >> q;

	vector<vector<long long>> vr(n + 2, vector<long long>(m + 2)), vl(n + 2, vector<long long>(m + 2));

	int t, x, y, k, a;
	while (q--) {
		cin >> t >> x >> y >> k >> a;
		if (t == 1) {
			vr[x][y] += a;
			if (x + k <= n && y + k <= m) vr[x + k][y + k] -= a;
		}
		else {
			vl[x][y] += a;
			if (x + k <= n && y - k >= 0) vl[x + k][y - k] -= a;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			vr[i][j] += vr[i - 1][j - 1];
			vl[i][j] += vl[i - 1][j + 1];
			cout << vr[i][j] + vl[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}