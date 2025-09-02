#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long n, a = 0, b = 1023, x;
	cin >> n;

	for (int i = 0; i < n; i++) {
		char op;
		cin >> op >> x;
		if (op == '|') a |= x, b |= x;
		if (op == '&') a &= x, b &= x;
		if (op == '^') a ^= x, b ^= x;
	}

	cout << 2 << "\n";
	cout << "& " << (a ^ b) << "\n";
	cout << "^ " << a << "\n";

	return 0;

}