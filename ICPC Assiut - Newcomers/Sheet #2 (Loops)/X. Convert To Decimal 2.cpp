#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {

		long long n, ones = 0;
		cin >> n;

		while (n) {
			if (n % 2 != 0)
				ones++;
			n /= 2;
		}

		long long res = pow(2, ones) - 1; //Using geometric series (2^n - 1) to get : 2^0 + 2^1 + ... 2^n

		cout << res << endl;
	}

	return 0;
}
