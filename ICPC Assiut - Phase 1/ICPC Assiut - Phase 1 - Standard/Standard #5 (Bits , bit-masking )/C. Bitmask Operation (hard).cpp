#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, q, op;
	cin >> n >> q;

	while (q--) {
		cin >> op;

		if (op == 1) n |= n + 1;
		else if (op == 2) n &= n - 1;
		else if (op == 3) n |= n - 1;
		else if (op == 4) n &= n + 1;
		else {
			cout << ((n & n - 1) || n <= 0 ? "not power of two\n" : "is power of two\n");
			continue;
		}

		cout << n << "\n";
	}

	return 0;
}