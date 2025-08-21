#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[100001], freq[100001] = { 0 }, n, mx = 0;
	cin >> n;


	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		freq[arr[i]]++;
		mx = max(mx, freq[arr[i]]);
	}

	sort(arr, arr + n);

	while (mx--) {
		for (int i = arr[0]; i <= arr[n - 1]; i++) {
			if (freq[i]) {
				cout << i << " ";
				freq[i]--;
			}
		}
		cout << endl;
	}

	return 0;
}