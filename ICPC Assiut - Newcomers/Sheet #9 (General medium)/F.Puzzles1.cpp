#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[51], n, m, res = INT_MAX;
	cin >> n >> m;

	for (int i = 0; i < m; i++)
		cin >> arr[i];

	sort(arr, arr + m);

	for (int i = 0; i <= m - n; i++)
		res = min(res, arr[i + n - 1] - arr[i]);

	cout << res;

	return 0;
}
