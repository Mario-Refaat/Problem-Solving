#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		string s;
		int k;
		vector<string>v;
		cin >> s >> k;

		for (int mask = 0; mask < (1 << s.size()); mask++) {
			string res;
			for (int i = 0; i < s.size(); i++) {
				if (mask & (1 << i)) res += s[i];
			}
			v.push_back(res);
		}

		sort(v.begin(), v.end());
		cout << v[k - 1] << "\n";

	}

	return 0;
}