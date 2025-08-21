#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, a, b, c, res = 0;
	cin >> n >> a >> b >> c;

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {

			int x = n - i * a - j * b;
			if (x >= 0 && x % c == 0) res = max(res, i + j + x / c);

		}
	}
	cout << res;

	return 0;
}