#include <bits/stdc++.h>
using namespace std;

long long CountBits(long long num) {
	long long cnt = 0;
	while (num) {
		num >>= 1;
		cnt++;
	}
	return cnt;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long a, b, res = 0;
	cin >> a >> b;

	long long bita = CountBits(a), bitb = CountBits(b);

	for (int i = bita; i <= bitb; i++) {
		long long base = (1LL << i) - 1;
		for (int j = 0; j < i - 1; j++) {
			long long num = ((1LL << j) ^ base);
			res += (num >= a && num <= b);
		}
	}

	cout << res;

	return 0;
}