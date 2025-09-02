#include <bits/stdc++.h>
using namespace std;

bool isSet(int num, int pos) {
	return (num & (1 << pos)) != 0;
}

int setBit(int num, int pos) {
	return num | (1 << pos);
}

int clearBit(int num, int pos) {
	return num & ~(1 << pos);
}

int toggleBit(int num, int pos) {
	return num ^ (1 << pos);
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int q, n;
	cin >> q >> n;

	while (q--) {
		int op, x;
		cin >> op >> x;

		if (op == 1) {
			cout << isSet(n, x) << "\n";
		}
		else if (op == 2) {
			n = setBit(n, x);
			cout << n << "\n";
		}
		else if (op == 3) {
			n = clearBit(n, x);
			cout << n << "\n";
		}
		else if (op == 4) {
			n = toggleBit(n, x);
			cout << n << "\n";
		}
	}

	return 0;
}