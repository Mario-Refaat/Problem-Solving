#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int freq[101] = { 0 }, n, k, x, res = 0;
	cin >> n >> k;

	while (n--) {
		cin >> x;
		freq[x % k]++;
	}

	for (int i = 0; i <= k / 2; i++) {
		if (i == k - i || i == 0) res += freq[i] / 2;
		else res += min(freq[i], freq[k - i]);
	}

	cout << res * 2;

	return 0;
}