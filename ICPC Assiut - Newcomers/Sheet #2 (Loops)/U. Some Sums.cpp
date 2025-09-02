#include <iostream>
using namespace std;

int main() {

	int n, a, b, sum = 0;
	cin >> n >> a >> b;

	for (int i = 1; i <= n; i++) {

		int temp = i, sumofdigits = 0;

		while (temp)
		{
			sumofdigits += temp % 10;
			temp /= 10;
		}

		if (sumofdigits >= a && sumofdigits <= b)
			sum += i;
	}

	cout << sum;

	return 0;
}
