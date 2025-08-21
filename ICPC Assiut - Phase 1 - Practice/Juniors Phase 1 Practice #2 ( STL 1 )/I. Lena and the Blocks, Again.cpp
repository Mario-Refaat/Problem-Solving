#include <iostream>
#include <cmath>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long arr[100001], n, minpos = -1, maxpos = -1, mx = LLONG_MIN, mn = LLONG_MAX, res = LLONG_MAX;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		mx = max(mx, arr[i]);
		mn = min(mn, arr[i]);
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] == mn) {
			minpos = i;
			if (maxpos != -1) res = min(res, abs(maxpos - minpos));
		}
		if (arr[i] == mx) {
			maxpos = i;
			if (minpos != -1) res = min(res, abs(maxpos - minpos));
		}
	}

	cout << res;

	return 0;
}