#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[102], n, m, x, y;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	cin >> m;

	while (m--) {

		cin >> x >> y;

		if (x == 1) arr[x + 1] += arr[x] - y;

		else if (x == n) arr[x - 1] += y - 1;

		else
		{
			arr[x + 1] += arr[x] - y;
			arr[x - 1] += y - 1;
		}

		arr[x] = 0;
	}

	for (int i = 1; i <= n; i++)
		cout << arr[i] << "\n";

	return 0;
}
