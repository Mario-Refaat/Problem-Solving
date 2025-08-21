#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long n, q, x;
	cin >> q >> n;

	while (q--) {
		cin >> x;

		if (x == 1) { 
			cin >> x;
			n |= x; 
		}
		else if (x == 2) {
			cin >> x; 
			n &= x; 
		}
		else if (x == 3) { 
			cin >> x;
			n ^= x; 
		}
		else n = ~n;

		cout << n << "\n";
	}

	return 0;
}