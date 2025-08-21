#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int freq[100001] = { 0 }, n, x, mx = 0, curr = 0;
	cin >> n;

	for (int i = 0; i < n * 2; i++)
	{
		cin >> x;

		if (freq[x] == 0) {
			curr++;
			mx = max(mx, curr);
			freq[x]++;
		}
		else {
			freq[x] = 0;
			curr--;
		}
	}

	cout << mx;

	return 0;
}