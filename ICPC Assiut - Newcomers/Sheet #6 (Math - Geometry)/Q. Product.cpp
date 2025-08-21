#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long l, r, m, res = 1;
	cin >> l >> r >> m;

	for (; l <= r; l++)
		res = (res % m) * (l % m);

	cout << res % m;

	return 0;
}