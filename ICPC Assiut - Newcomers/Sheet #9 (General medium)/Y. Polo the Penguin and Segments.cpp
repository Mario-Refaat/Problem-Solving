#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, k, total = 0;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		total += y - x + 1;
	}

	total %= k;
	cout << (total == 0 ? 0 : k - total);

	return 0;
}