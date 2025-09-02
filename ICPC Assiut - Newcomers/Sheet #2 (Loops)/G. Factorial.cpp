#include <iostream>
using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {

		long long n, fact = 1;
		cin >> n;

		for (int i = 1; i <= n; i++)
			fact *= i;

		if (n == 0)
			cout << 1 << endl;
		else
			cout << fact << endl;
	}

	return 0;
}
