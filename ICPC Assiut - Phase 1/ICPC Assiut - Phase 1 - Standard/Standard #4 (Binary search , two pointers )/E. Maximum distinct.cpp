#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, k, mx = 0;
	string s;

	cin >> n >> k >> s;

	map<char, int> mp;

	for (int i = 0; i < n; i++) {

		mp[s[i]]++;

		if (i >= k) {
			mp[s[i - k]]--;
			if (mp[s[i - k]] == 0) mp.erase(s[i - k]);
		}

		mx = max(mx, (int)mp.size());
	}

	cout << mx;

	return 0;
}