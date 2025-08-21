#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, x, y, counter = 0;
	cin >> n;

	while (n--) {
		cin >> x >> y;
		counter += y - x >= 2;
	}

	cout << counter;

	return 0;
}
