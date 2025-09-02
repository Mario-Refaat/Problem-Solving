#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		long long n, sum = 0;
		cin >> n;

		vector<long long>v(n + 1);
		for (long long i = 0; i < n; i++) {
			cin >> v[i];
			sum += v[i];
		}

		if (sum % 3)cout << "0\n";
		else {
			long long  curr = 0, ans = 0, cntz = 0;
			for (long long i = 0; i < n - 1; i++) {
				curr += v[i];
				if (curr == 2 * sum / 3)ans += cntz;
				if (curr == sum / 3)cntz++;
			}
			cout << ans << "\n";
		}

	}

	return 0;
}