#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[5001], freq[4] = { 0 }, n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		freq[arr[i]]++;
	}

	sort(freq, freq + 4);

	cout << freq[1] << "\n";

	while (freq[1]--) {

		for (int i = 0; i < n; i++)
			if (arr[i] == 1) { cout << i + 1 << " "; arr[i] = 0; break; }

		for (int i = 0; i < n; i++)
			if (arr[i] == 2) { cout << i + 1 << " "; arr[i] = 0; break; }

		for (int i = 0; i < n; i++)
			if (arr[i] == 3) { cout << i + 1 << " "; arr[i] = 0; break; }

		cout << "\n";
	}

	return 0;
}
