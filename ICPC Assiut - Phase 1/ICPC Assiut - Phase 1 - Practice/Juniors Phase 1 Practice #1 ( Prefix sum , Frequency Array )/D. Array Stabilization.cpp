#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[100001], n;
	cin >> n;

	for (int i = 0; i < n; i++) cin >> arr[i];

	sort(arr, arr + n);

	cout << min(arr[n - 2] - arr[0], arr[n - 1] - arr[1]);

	return 0;
}