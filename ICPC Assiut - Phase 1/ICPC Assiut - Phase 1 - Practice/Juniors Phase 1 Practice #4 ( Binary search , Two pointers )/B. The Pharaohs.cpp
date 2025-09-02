#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		long long x;
		cin >> x;

		long long l = 0, r = 2e9, ans;
		while (l <= r) {
			long long mid = l + (r - l) / 2;
			if (mid * (mid + 1) / 2 >= x) ans = mid, r = mid - 1;
			else l = mid + 1;
		}

		cout << ans << "\n";
	}

	return 0;
}