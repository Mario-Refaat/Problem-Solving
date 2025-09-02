#include <bits/stdc++.h>
using namespace std;

int NumberOfOnes(int num) {
	int cnt = 0;
	while (num) {
		num &= num - 1;
		cnt++;
	}
	return cnt;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m, k, res = 0;
	cin >> n >> m >> k;

	vector<int>v(m + 1);
	for (int i = 0; i < m + 1; i++) cin >> v[i];

	for (int i = 0; i < m; i++) {
		int num = (v[i] ^ v[m]);
		res += NumberOfOnes(num) <= k;
	}

	cout << res;

	return 0;
}