#include <iostream>
using namespace std;

int arr[100002], freq[100002], sfx[100002];

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m, x;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) cin >> arr[i];

	for (int i = n; i > 0; i--) {
		if (freq[arr[i]] == 0) sfx[i]++;
		freq[arr[i]]++;
		sfx[i] += sfx[i + 1];
	}

	while (m--) {
		cin >> x;
		cout << sfx[x] << endl;
	}

	return 0;
}