#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	pair<int, int> arr[100001];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) cin >> arr[i].first >> arr[i].second;

	sort(arr, arr + n);

	int mn = arr[0].first, mx = arr[0].second;

	for (int i = 0; i < n; i++) {

		if (mx >= arr[i].first) {
			mx = max(mx, arr[i].second);
		}
		else {
			cout << mn << " " << mx << endl;
			mn = arr[i].first;
			mx = arr[i].second;
		}
	}

	cout << mn << " " << mx << endl;

	return 0;
}