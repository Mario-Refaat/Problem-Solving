#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		string s, res;
		cin >> s;

		map<char, int>mp;
		for (auto e : s) mp[e]++;

		for (auto e : s) {

			if (res.find(e) == string::npos) {

				while (!res.empty() && res.back() > e && mp[res.back()]) 
					res.pop_back();

				res += e;
			}

			mp[e]--;
		}

		cout << res;
	}

	return 0;
}