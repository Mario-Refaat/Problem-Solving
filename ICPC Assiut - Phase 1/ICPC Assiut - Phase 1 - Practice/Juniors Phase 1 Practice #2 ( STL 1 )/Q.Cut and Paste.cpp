#include <bits/stdc++.h>
using namespace std;

long long md = 1e9 + 7;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		int x;
		string s;
		cin >> x >> s;
		long long sz = s.size();

		for (int i = 1; i <= x; i++) {
			int repeat = s[i - 1] - '1';
			if (s.size() < x) {
				if (repeat == 2) s += s.substr(i) + s.substr(i);
				else if (repeat == 1) s += s.substr(i);
			}
			sz = (sz + (sz - i) * repeat) % md;
		}

		cout << (sz + md) % md << "\n";
	}

	return 0;
}
