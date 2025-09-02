#include <iostream>
using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {

		int n;
		cin >> n;

		if (n == 0)
			cout << 0;

		while (n) {
			cout << n % 10 << " ";
			n /= 10;
		}

		cout << "\n";
	}

	return 0;
}
