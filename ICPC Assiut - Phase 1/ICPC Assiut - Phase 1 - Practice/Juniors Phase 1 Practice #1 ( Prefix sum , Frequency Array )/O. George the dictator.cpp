#include <iostream>
using namespace std;

int pos[10000001], neg[10000001];

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[100001], n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] >= 0) pos[arr[i]]++;
		else neg[-arr[i]]++;
	}

	long long res = 0;

	for (int i = 0; i < n; i++) {

		if (arr[i] >= 0)
			pos[arr[i]]--;
		else
			neg[-arr[i]]--;

		if (k - arr[i] >= 0) 
			res += pos[k - arr[i]];
		else 
			res += neg[-(k - arr[i])];

	}

	cout << res;

	return 0;
}