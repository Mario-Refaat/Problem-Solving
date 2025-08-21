#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int freq[200001] = { 0 }, n, m, x;
	cin >> n >> m;

	while (n--) {
		cin >> x;
		freq[x + m]++;
	}

	for (int i = 0; i <= 2 * m; i++) {
		if (freq[i] == 0) {
			cout << i - m;
			return 0;
		}
	}

	return 0;
}
