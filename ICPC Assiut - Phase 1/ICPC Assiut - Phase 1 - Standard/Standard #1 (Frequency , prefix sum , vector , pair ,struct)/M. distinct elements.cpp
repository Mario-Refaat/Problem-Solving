#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int pref[100001] = { 0 }, n, q, x;
	cin >> n >> q;

	for (int i = 0; i < n; i++) {
		cin >> x;
		pref[x] = 1;
	}

	for (int i = 0; i < 100000; i++) pref[i + 1] += pref[i];

	while (q--) {
		cin >> x;
		cout << pref[x - 1] << " " << pref[100000] - pref[x] << endl;
	}

	return 0;
}