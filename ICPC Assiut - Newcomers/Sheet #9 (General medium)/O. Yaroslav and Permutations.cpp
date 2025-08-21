#include <iostream>
using namespace std;


int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int freq[1001] = { 0 }, n, x;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		freq[x]++;
	}

	for (int i = 1; i <= 1000; i++) {
		if (freq[i] > (n + 1) / 2)
		{
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";

	return 0;
}
