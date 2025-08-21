#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;

	s = '+' + s;
	int pref[100001] = { 0 };

	for (int i = 1; i < s.size(); i++) {
		pref[i] = s[i] == s[i + 1];
		pref[i] += pref[i - 1];
	}

	int q, l, r;
	cin >> q;
	while (q--) {
		cin >> l >> r;
		cout << pref[r - 1] - pref[l - 1] << endl;
	}

	return 0;
}