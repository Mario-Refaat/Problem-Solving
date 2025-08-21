#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	double c, time, l = 0, r = 2e9, ans;
	cin >> c >> time;

	while (r - l >= 1e-7) {
		double mid = l + (r - l) / 2;
		if (c * mid * log2(mid) <= time) ans = mid, l = mid;
		else r = mid;
	}

	cout << fixed << setprecision(6) << ans;

	return 0;
}