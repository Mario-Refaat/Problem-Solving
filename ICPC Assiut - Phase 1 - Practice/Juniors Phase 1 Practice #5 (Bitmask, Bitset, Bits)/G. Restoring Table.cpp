#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, x;
	cin >> n;

	vector<int>res(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> x;
			res[i] |= x == -1 ? 0 : x;
		}
	}

	for (auto e : res) cout << e << " ";

	return 0;
}