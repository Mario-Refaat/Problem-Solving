#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		long long n, x, res = 0, curr = 0;
		cin >> n >> x;

		vector<long long>v(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		sort(v.begin(), v.end(), greater<>());

		for (int i = 0; i < n; i++) {
			curr++;
			if (curr * v[i] >= x) {
				res++;
				curr = 0;
			}
		}

		cout << res << endl;
	}

	return 0;
}
