#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long arr[100001], pref[100001] = { 0 }, n, q;
	cin >> n >> q;

	for (int i = 1; i <= n; i++) cin >> arr[i];

	for (int i = 1; i <= q; i++) {
		int l, r, x;
		cin >> l >> r >> x;
		pref[l] += x;
		pref[r + 1] -= x;
	}

	for (int i = 1; i <= n; i++) pref[i] += pref[i - 1];

	for (int i = 1; i <= n; i++) cout << arr[i] + pref[i] << " ";

	return 0;
}
