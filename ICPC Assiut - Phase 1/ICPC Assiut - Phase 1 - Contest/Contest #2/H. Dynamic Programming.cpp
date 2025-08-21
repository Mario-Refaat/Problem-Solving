#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		long long n, m, a, b, res = 0;
		cin >> n >> m >> a >> b;

		while (n > m) {
			if (n / 2 >= m && a <= (n - n / 2) * b) {
				res += a;
				n /= 2;
			}
			else {
				res += (n - m) * b;
				break;
			}
		}

		cout << res << endl;
	}

	return 0;
}
