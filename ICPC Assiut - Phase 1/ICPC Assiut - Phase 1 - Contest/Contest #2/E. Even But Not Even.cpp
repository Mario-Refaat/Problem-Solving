#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		long long n, ods = 0, r = 2;
		string s;
		cin >> n >> s;

		for (auto e : s) ods += ((e - '0') % 2);

		if (ods <= 1) { cout << "-1\n"; continue; }

		for (auto e : s) {
			if (r && (e - '0') % 2) {
				cout << e; r--;
			}
		}

		cout << '\n';
	}

	return 0;
}
