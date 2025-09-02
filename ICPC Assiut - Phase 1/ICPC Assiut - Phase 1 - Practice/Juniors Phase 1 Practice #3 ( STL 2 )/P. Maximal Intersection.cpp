#include <bits/stdc++.h>
using namespace std;

bool cmp( pair<int, int> a, pair<int, int>b) {
	return a.second < b.second;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector<pair<int, int>>v1, v2;
	int n, x, y , mx = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v1.push_back({ i,x });
		v2.push_back({ i,y });
	}

	sort(v1.begin(), v1.end(), cmp);
	sort(v2.begin(), v2.end(), cmp);

	if (v2[0].first != v1[n - 1].first) mx = max(mx, v2[0].second - v1[n - 2].second);
	else mx = max(mx, v2[1].second - v1[n - 2].second);

	if (v1[n-1].first != v2[0].first) mx = max(mx, v2[1].second - v1[n - 1].second);
	else mx = max(mx, v2[1].second - v1[n - 2].second);

	cout << mx;

	return 0;
}