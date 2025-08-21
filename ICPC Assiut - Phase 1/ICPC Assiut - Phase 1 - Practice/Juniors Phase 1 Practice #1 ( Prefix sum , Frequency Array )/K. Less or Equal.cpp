#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[200001], n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);

	if (k == 0) cout << (arr[0] == 1 ? -1 : 1);
	else if (arr[k - 1] == arr[k]) cout << -1;
	else cout << arr[k - 1];

	return 0;
}