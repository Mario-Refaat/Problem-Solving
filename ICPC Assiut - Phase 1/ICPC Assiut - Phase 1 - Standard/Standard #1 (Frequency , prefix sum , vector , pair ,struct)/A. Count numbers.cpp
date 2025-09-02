#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int freq[100001] = { 0 }, n, q, x, y;
	cin >> n >> q;

	while (q--) {
		cin >> x >> y;

		if (x == 1) freq[y]++;
		else cout << freq[y] << endl;
	}

	return 0;
}
