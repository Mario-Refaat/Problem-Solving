#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, f = 0;
	cin >> n;

	vector<int>v(n);
	for (int i = 0; i < n; i++) cin >> v[i];

	for (int mask = 0; mask < (1LL << n); mask++) {
		int speed = 0;
		for (int i = 0; i < n; i++)
			if ((1 << i) & mask) speed += v[i];
			else speed -= v[i];
		if (speed % 360 == 0) f = 1;
	}

	cout << (f ? "YES" : "NO");

	return 0;
}