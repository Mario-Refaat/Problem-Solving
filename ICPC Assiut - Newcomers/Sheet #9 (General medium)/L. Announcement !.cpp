#include <iostream>
using namespace std;

int freq[1000001];

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, res = 0, x;
	cin >> n;

	while (n--) {
		cin >> x;
		freq[x]++;
	}

	for (int i = 0; i <= 1000000; i++) {
		if (freq[i] > 1)
			res += freq[i] - 1;
	}

	cout << (res > 0 ? res : -1);

	return 0;
}
