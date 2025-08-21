#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		long long n, mx = 0;
		cin >> n;

		vector<long long>v(n);
		for (int i = 0; i < n; i++) cin >> v[i];

		for (int i = 0; i < n; i++) {
			long long curr = 0;
			for (int j = 0; j < n; j++) {
				if (v[j] >= v[i]) curr += v[i];
			}
			mx = max(mx, curr);
		}

		cout << mx << endl;
	}

	return 0;
}
