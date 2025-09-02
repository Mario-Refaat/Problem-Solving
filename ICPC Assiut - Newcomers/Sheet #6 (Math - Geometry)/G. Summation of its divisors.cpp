#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long n, sum = 0;
	cin >> n;

	for (long long i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			if (i * i == n)
				sum += i;
			else
				sum += i + n / i;
		}
	}

	cout << sum;

	return 0;
}