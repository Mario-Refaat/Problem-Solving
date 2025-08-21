#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, mx = 0, mn = INT_MAX;
	cin >> n;

	vector<int>v(n);
	for (int i = 0; i < n; i++) { cin >> v[i]; mx |= v[i]; }

	int l = 0, r = 0;
	bitset<35>curr;
	map<int, int>mp;

	while (l < n) {

		while (r < n && curr.to_ullong() < mx) {
			for (int i = 0; i < 32; i++) {
				if ((1 << i) & v[r]) {
					mp[i]++;
					if (mp[i] == 1)curr[i] = 1;
				}
			}
			r++;
		}

		if (curr.to_ullong() == mx) mn = min(mn, r - l);

		for (int i = 0; i < 32; i++) {
			if ((1 << i) & v[l]) {
				mp[i]--;
				if (mp[i] == 0)curr[i] = 0;
			}
		}
		l++;
	}

	cout << (mn > 0 ? mn : 1);

	return 0;
}