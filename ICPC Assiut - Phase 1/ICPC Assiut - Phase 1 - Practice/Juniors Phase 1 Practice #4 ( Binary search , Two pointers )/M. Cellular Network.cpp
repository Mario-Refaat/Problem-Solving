#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long n, m, dis = LLONG_MIN;
	cin >> n >> m;

	vector<long long> c(n), t(m);
	for (int i = 0; i < n; i++) cin >> c[i];
	for (int i = 0; i < m; i++) cin >> t[i];

	for (int i = 0; i < c.size(); i++) {
		int it1 = upper_bound(t.begin(), t.end(), c[i]) - t.begin(), it2 = it1 - 1;
		if (it1 == t.size())it1--;
		if (it2 == -1) it2++;

		dis = max(dis, min(abs(c[i] - t[it1]), abs(c[i] - t[it2])));
	}

	cout << dis;

	return 0;
}