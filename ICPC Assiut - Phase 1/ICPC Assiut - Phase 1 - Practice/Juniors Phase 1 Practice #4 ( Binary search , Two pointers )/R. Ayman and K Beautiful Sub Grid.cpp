#include <bits/stdc++.h>
using namespace std;

bool can(vector<vector<vector<int>>>& freq, int n, int m, int k, int s) {

	int mx = 0;

	for (int i = 1; i + s - 1 <= n; i++) {
		for (int j = 1; j + s - 1 <= m; j++) {
			int cnt = 0;
			for (int z = 0; z < 26; z++) {
				cnt += (freq[z][i + s - 1][j + s - 1] - freq[z][i - 1][j + s - 1] - freq[z][i + s - 1][j - 1] + freq[z][i - 1][j - 1]) >= 1;
			}
			mx = max(mx, cnt);
		}
	}

	return mx >= k;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m, k;
	cin >> n >> m >> k;

	vector<vector<char>>v(n + 1, vector<char>(m + 1));
	vector<vector<vector<int>>>freq(26, vector<vector<int>>(n + 1, vector<int>(m + 1)));

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> v[i][j];

	for (int z = 'A'; z <= 'Z'; z++) {
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				freq[z - 'A'][i][j] +=
				(v[i][j] == z) + freq[z - 'A'][i][j - 1] + freq[z - 'A'][i - 1][j] - freq[z - 'A'][i - 1][j - 1];
	}

	long long l = 0, r = min(n, m), ans = -1;
	while (l <= r) {
		long long mid = l + (r - l) / 2;
		if (can(freq, n, m, k, mid)) ans = mid, r = mid - 1;
		else l = mid + 1;
	}

	cout << ans << "\n";

	if (ans != -1) {
		for (int i = 1; i + ans - 1 <= n; i++) {
			for (int j = 1; j + ans - 1 <= m; j++) {
				int cnt = 0;
				for (int z = 0; z < 26; z++) {
					cnt += (freq[z][i + ans - 1][j + ans - 1] - freq[z][i - 1][j + ans - 1] - freq[z][i + ans - 1][j - 1] + freq[z][i - 1][j - 1]) >= 1;
				}
				if (cnt >= k) { cout << i << " " << j; return 0; }
			}
		}
	}

	return 0;
}