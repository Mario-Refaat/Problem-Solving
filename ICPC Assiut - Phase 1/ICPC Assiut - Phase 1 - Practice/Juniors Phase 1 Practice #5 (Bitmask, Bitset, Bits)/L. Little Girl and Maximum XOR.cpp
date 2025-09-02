#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long a, b, f = 0;
	cin >> a >> b;

	bitset<65>ba(a), bb(b), res;

	for (int i = 64; i >= 0; i--) {
		if (f) res[i] = 1;
		else if (bb[i] == 1 && ba[i] == 0) { f = 1; res[i] = 1; }
	}

	cout << res.to_ullong();

	return 0;
}