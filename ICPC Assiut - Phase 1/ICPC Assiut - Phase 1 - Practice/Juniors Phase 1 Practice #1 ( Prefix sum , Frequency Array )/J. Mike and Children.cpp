#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int freq[200001] = { 0 }, arr[1001], n;
	cin >> n;

	for (int i = 0; i < n; i++) cin >> arr[i];

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			freq[arr[i] + arr[j]]++;
		}
	}

	cout << *max_element(freq, freq + 200001);

	return 0;
}