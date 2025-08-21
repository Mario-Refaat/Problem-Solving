#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	bool flag = true;
	int n, x;
	cin >> n;

	while (n--) {
		cin >> x;

		if (x % 2 == 0)
			cout << x / 2 << '\n';
		else
		{
			if (flag) {
				cout << (int)ceil(x / 2.0) << '\n';
			}
			else {
				cout << (int)floor(x / 2.0) << '\n';
			}

			flag = !flag;
		}

	}

	return 0;
}