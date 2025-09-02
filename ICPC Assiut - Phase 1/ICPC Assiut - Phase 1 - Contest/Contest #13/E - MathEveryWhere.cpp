#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		long long n, k, res = 0, num = 1;
		cin >> n >> k;

		if (k == 1) { cout << 1; return 0; }

		while (true) {
			num *= k;
			if ((num + 1) / 2 > n) break;
			res += min(n, num) - (num + 1) / 2 + 1;
		}

		cout << res + 1;
	}

	return 0;
}