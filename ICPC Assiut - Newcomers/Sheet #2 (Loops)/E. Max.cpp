#include <iostream>
using namespace std;

int main() {

	int n, max = 0, x;
	cin >> n;

	while (n--) {
		cin >> x;
		if (x > max)
			max = x;
	}

	cout << max;
	return 0;
}
