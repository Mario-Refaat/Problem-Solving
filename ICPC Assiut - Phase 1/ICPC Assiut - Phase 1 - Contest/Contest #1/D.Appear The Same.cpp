#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		string s;
		cin >> s;

		int freq[26] = { 0 }, f1 = 1, f2 = 1, mn = 1e5, mx = 0;
		for (auto e : s) freq[e - 'a']++;

		for (auto e : freq) if (e != 0) mn = min(mn, e);
		for (auto e : freq) if (e != 0) mx = max(mx, e);

		for (auto e : freq) if (e != 0) { f1 -= e - mn; f2 -= (e == mx ? 0 : e); }

		cout << (f1 >= 0 || f2 >= 0 ? "YES" : "NO");

	}

	return 0;
}
