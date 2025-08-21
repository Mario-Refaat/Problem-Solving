#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[200001], n, x, y;

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++) {

		if (i == 0)
		{
			x = arr[i + 1] - arr[i];
			y = arr[n - 1] - arr[i];
		}
		else if (i == n - 1)
		{
			x = arr[i] - arr[i - 1];
			y = arr[i] - arr[0];
		}
		else
		{
			x = min(arr[i] - arr[i - 1], arr[i + 1] - arr[i]);
			y = max(arr[i] - arr[0], arr[n - 1] - arr[i]);
		}
		cout << x << " " << y << '\n';

	}

	return 0;
}
