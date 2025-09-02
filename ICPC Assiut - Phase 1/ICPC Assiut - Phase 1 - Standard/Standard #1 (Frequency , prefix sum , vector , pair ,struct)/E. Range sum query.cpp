#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long pref[100001], n, q, x;
	cin >> n >> q;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		pref[i] = pref[i - 1] + x;
	}

	while (q--) {
		int l, r;
		cin >> l >> r;
		cout << pref[r] - pref[l - 1] << endl;
	}

	return 0;
}
