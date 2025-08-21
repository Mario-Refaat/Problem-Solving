#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long n, x, freq[32] = { 0 }, res = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		for (int i = 0; i < 32; i++) if (x & (1LL << i)) freq[i]++;
	}

	for (int i = 0; i < n; i++) {
		long long num = 0;
		for (int i = 0; i < 32; i++) {
			if (freq[i]) {
				num |= (1LL << i); freq[i]--;
			}
		}
		res += num * num;
	}

	cout << res;

	return 0;
}