#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	for (int i = 1; i <= t; i++) {

		long long n, k;
		cin >> n >> k;

		vector<long long>v(n);
		for (int i = 0; i < n; i++) cin >> v[i];

		long long l = 0, r = 0, mxd = 0;
		multiset<long long>st;

		while (l < n) {

			while (r < n && r - l - 1 <= k) st.insert(v[r++]);
			mxd = max(mxd, *st.rbegin() - *st.begin());
			st.erase(st.find(v[l])); l++;

		}

		cout << "Case #" << i << ": " << mxd << "\n";
	}

	return 0;
}