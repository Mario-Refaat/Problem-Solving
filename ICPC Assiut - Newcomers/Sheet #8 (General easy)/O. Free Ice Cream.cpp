#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long n, x, y, dis = 0;
	cin >> n >> x;

	while (n--) {
		char op;
		cin >> op >> y;

		if (op == '+')
			x += y;
		else if (x >= y)
			x -= y;
		else
			dis++;
	}

	cout << x << " " << dis;

	return 0;
}
