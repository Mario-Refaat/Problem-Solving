#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t, k, res = 0;
	cin >> t >> k;

	while (t--) {

		bool flag = true;
		int freq[10] = { 0 }, x;
		cin >> x;

		while (x)
		{
			freq[x % 10]++;
			x /= 10;
		}

		for (int i = 0; i <= k; i++)
			if (freq[i] == 0)
				flag = false;

		if (flag)
			res++;
	}

	cout << res;

	return 0;
}
