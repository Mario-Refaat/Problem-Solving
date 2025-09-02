#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		long long n, m, k, res = 0;
		cin >> n >> m >> k;
		vector<long long>v(m * n);

		for (int i = 0; i < n * m; i++) cin >> v[i];
		sort(v.begin(), v.end());

		for (int i = 0; i < k; i++) res += v[i];
		cout << res << "\n";

	}

	return 0;
}