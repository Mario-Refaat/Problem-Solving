#include <bits/stdc++.h>
using namespace std;

int CountOnes(int num, int idx) {

	int FullCycle = (num + 1) / (1 << idx);
	int Bits = FullCycle * (1 << idx - 1);
	int Extra = max(0, (num + 1) % (1 << idx) - (1 << idx - 1));

	return Bits + Extra;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		int l, r, mx = 0;
		cin >> l >> r;

		for (int i = 0; i <= 30; i++) {
			mx = max(mx, CountOnes(r, i) - CountOnes(l - 1, i));
		}

		cout << r - l + 1 - mx << "\n";
	}

	return 0;
}