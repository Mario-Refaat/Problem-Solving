#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, k1, k2;
	cin >> n >> k1 >> k2;

	map<long long, long long, greater<long long>> mp;
	vector<long long> v1(n), v2(n);

	for (int i = 0; i < n; i++) cin >> v1[i];
	for (int i = 0; i < n; i++) cin >> v2[i];
	for (int i = 0; i < n; i++) mp[abs(v1[i] - v2[i])]++;

	long long res = 0, k = k1 + k2;
	for (auto& e : mp) {
		if (k == 0) break;
		else if (e.first == 0) { res = k % 2; break; }
		else {
			long long mn = min(e.second, k);
			mp[e.first - 1] += mn;
			mp[e.first] -= mn;
			k -= mn;
		}
	}

	for (auto& e : mp) {
		res += e.first * e.first * e.second;
	}

	cout << res;

	return 0;
}