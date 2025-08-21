#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	double l, s1, s2, q, x;
	cin >> l >> s1 >> s2 >> q;

	while (q--) {
		cin >> x;
		cout << fixed << setprecision(6) << sqrt(2) * (l - sqrt(x)) / abs(s2 - s1) << '\n';
	}

	return 0;
}