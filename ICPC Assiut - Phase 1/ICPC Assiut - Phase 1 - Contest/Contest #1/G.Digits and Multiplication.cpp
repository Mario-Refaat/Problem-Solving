#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		long long num, mn = INT_MAX;
		cin >> num;

		for (long long i = 1; i * i <= num; i++) {
			if (num % i == 0) {

				long long x = i, digits1 = 0, digits2 = 0;

				while (x) {
					x /= 10;
					digits1++;
				}

				x = num / i;

				while (x) {
					x /= 10;
					digits2++;
				}

				mn = min(mn, max(digits1, digits2));
			}
		}

		cout << mn;
	}

	return 0;
}
