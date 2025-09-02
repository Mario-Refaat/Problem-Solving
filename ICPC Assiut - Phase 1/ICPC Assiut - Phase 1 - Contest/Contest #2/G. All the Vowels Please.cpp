#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		long long n, row = -1, col = -1;
		string v = "aeiou", res = "";
		cin >> n;

		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0 && i >= 5 && n / i >= 5) {
				row = i; col = n / i;
			}
		}

		if (row == -1) { cout << -1; return 0; }

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				res += v[(i + j) % 5];
			}
		}

		cout << res;
	}

	return 0;
}
