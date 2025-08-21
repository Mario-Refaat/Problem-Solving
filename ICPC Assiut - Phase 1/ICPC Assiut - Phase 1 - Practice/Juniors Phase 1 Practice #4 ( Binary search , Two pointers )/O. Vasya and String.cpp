#include <bits/stdc++.h>
using namespace std;

int maxbeauty(string s, char c, int k) {

	int l = 0, r = 0, mx = 0, curr = 0;

	while (l < s.size()) {

		while (r < s.size()) {
			if (s[r] != c) {
				if (curr < k) curr++;
				else break;
			}
			r++;
		}
		mx = max(mx, r - l);

		if (s[l] != c) curr--;
		l++;
	}
	return mx;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, k;
	string s;
	cin >> n >> k >> s;

	cout << max(maxbeauty(s, 'a', k), maxbeauty(s, 'b', k));

	return 0;
}