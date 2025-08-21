#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	vector<long long>v(n);

	map<long long, long long> mp;
	long long mx = LLONG_MIN, suml = 0, sumr = 0;

	for (int i = 0; i < n; i++) {
		cin >> v[i];
		suml += v[i];
		if (mp.find(suml) == mp.end())
			mp[suml] = i;
	}

	for (int i = n - 1; i > 0; i--) {
		sumr += v[i];
		if (mp.count(sumr) && mp[sumr] < i) mx = max(mx, sumr);
	}

	cout << mx;

	return 0;
}