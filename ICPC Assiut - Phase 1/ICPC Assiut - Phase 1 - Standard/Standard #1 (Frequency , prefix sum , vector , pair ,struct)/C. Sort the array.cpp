#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int freq[100001] = { 0 }, n, x;
	cin >> n;

	while (n--) {
		cin >> x;
		freq[x]++;
	}

	for (int i = 1; i <= 100000; i++) {
		while (freq[i]--) cout << i << " ";
	}

	return 0;
}
