#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	freopen("mex.in", "r", stdin);

	int t = 1;
	cin >> t;

	while (t--) {

		int n, q;
		cin >> n >> q;

		vector<int> arr(n + 1), pfx(n + 2, n + 1), sfx(n + 2, n + 1);

		for (int i = 1; i <= n; i++) cin >> arr[i];

		for (int i = 1; i <= n; i++) pfx[i] = min(arr[i], pfx[i - 1]);
		for (int i = n; i >= 1; i--) sfx[i] = min(arr[i], sfx[i + 1]);

		int l, r;
		while (q--) {
			cin >> l >> r;
			cout << min(pfx[l - 1], sfx[r + 1]) << '\n';
		}

	}

	return 0;
}