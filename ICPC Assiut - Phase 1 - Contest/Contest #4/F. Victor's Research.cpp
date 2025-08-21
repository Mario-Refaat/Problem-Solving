#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		long long n, s, res = 0, x, pref = 0;
		cin >> n >> s;

		map<long long, int>mp;
		mp[0]++;

		while (n--) {
			cin >> x;
			pref += x;
			res += mp[pref - s];
			mp[pref]++;
		}

		cout << res;
	}

	return 0;
}