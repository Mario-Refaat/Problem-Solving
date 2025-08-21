#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int>a, pair<int, int>b) { return a.first < b.first; }

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector<pair<int, int>>v, merge;
	int n, m, l, r, q;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> l >> r;
		v.push_back({ l,r });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		if (merge.empty() || merge.back().second < v[i].first)
			merge.push_back(v[i]);
		else
			merge.back().second = max(merge.back().second, v[i].second);
	}

	cin >> q;

	while (q--) {
		cin >> l >> r;
		if (l > r) swap(l, r);
		int pos = upper_bound(merge.begin(), merge.end(), make_pair(l, 0), comp) - merge.begin();
		if (pos == 0) { cout << "NO\n"; continue; }
		if (merge[pos - 1].second >= r) cout << "YES\n";
		else cout << "NO\n";
	}


	return 0;
}