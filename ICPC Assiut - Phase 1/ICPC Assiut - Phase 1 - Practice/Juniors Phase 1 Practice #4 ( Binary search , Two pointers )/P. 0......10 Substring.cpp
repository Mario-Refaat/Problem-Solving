#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	for (int i = 1; i <= t; i++) {

		string s;
		cin >> s;

		long long l = 0, r = 0, mnl = 0, mnr = 1e6;
		map<char, int>mp;

		while (l < s.size()) {

			while (r < s.size() && (mp.size() < 11 || mp['0'] < 2 || mp['1'] < 2)) {
				mp[s[r]]++;
				if (r > 0 && s[r] == '0' && s[r - 1] == '1') mp['M']++;
				r++;
			}

			if (mp.size() == 11 && mp['0'] >= 2 && mp['1'] >= 2) {
				if (r - l < mnr - mnl) { mnr = r; mnl = l; }
			}

			mp[s[l]]--;
			if (mp[s[l]] == 0) mp.erase(s[l]);
			if (s[l] == '1' && s[l + 1] == '0' && r >= l + 1) {
				mp['M']--;
				if (mp['M'] == 0) mp.erase('M');
			}
			l++;
		}

		cout << "Case " << i << ": " << (mnr == 1e6 ? "NO" : "YES " + to_string(mnl + 1) + " " + to_string(mnr)) << "\n";

	}

	return 0;
}