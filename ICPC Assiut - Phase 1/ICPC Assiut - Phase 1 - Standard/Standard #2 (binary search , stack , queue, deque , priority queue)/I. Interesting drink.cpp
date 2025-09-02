#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int arr[100001], n, q, x;
	cin >> n;

	for (int i = 0; i < n; i++) cin >> arr[i];
	cin >> q;

	sort(arr, arr + n);

	while (q--) {
		cin >> x;
		cout << upper_bound(arr, arr + n, x) - arr << endl;
	}

	return 0;
}
