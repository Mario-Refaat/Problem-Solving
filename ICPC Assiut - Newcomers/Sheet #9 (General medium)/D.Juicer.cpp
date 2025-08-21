#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, b, d, size = 0, res = 0, x;
	cin >> n >> b >> d;

	while (n--) {
		cin >> x;
		if (x > b)
			continue;
		size += x;
		if (size > d) { size = 0; res++; }
	}

	cout << res;

	return 0;
}
