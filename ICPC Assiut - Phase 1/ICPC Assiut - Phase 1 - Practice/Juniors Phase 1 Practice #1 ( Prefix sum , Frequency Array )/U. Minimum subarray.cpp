#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		long long n, h, res = 0, curr = 0;
		cin >> n >> h;

		vector<int> v(n + 2, 0);

		int l, r;
		for (int i = 0; i < n; i++) {
			cin >> l >> r;
			v[l]++;
			v[r + 1]--;
		}

		for (int i = 1; i <= n; i++) v[i] += v[i - 1];

		for (int i = 1; i <= h; i++)
			curr += v[i];

		res = curr;

		for (int i = h + 1; i <= n; i++) {
			curr -= v[i - h];
			curr += v[i];
			res = max(res, curr);
		}

		cout << n * h - res << endl;
	}

	return 0;
}