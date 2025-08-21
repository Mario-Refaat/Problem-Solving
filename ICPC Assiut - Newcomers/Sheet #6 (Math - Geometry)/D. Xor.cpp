#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long a, b, q;
	cin >> a >> b >> q;

	q %= 3;

	if (q == 1)
		cout << a;
	else if (q == 2)
		cout << b;
	else
		cout << (a ^ b);

	return 0;
}