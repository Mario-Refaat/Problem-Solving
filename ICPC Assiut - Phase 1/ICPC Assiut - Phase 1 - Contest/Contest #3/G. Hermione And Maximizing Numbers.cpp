#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		string s, tmp;
		cin >> s;
		tmp = s;

		sort(tmp.begin(), tmp.end());
		next_permutation(s.begin(), s.end());

		cout << (s == tmp ? "-1" : s) << endl;

	}

	return 0;
}