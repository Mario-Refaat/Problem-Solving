#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, q;
	cin >> n >> q;

	vector<pair<pair<int, int>, pair<int, int>>>qu(q);
	vector<pair<pair<int, int>, int>>arr(n);
	vector<int>v;

	for (int i = 0; i < n; i++) {
		cin >> arr[i].first.first >> arr[i].first.second >> arr[i].second;
		v.push_back(arr[i].first.first);
		v.push_back(arr[i].first.second);
	}

	for (int i = 0; i < q; i++) {
		cin >> qu[i].first.first >> qu[i].first.second >> qu[i].second.first >> qu[i].second.second;
		v.push_back(qu[i].first.first);
		v.push_back(qu[i].first.second);
		v.push_back(qu[i].second.first);
		v.push_back(qu[i].second.second);
	}

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	vector<vector<long long>>res(v.size() + 2, vector<long long>(v.size() + 2, 0));

	for (auto& e : arr) {
		e.first.first = lower_bound(v.begin(), v.end(), e.first.first) - v.begin();
		e.first.second = lower_bound(v.begin(), v.end(), e.first.second) - v.begin();
		res[e.first.first + 1][e.first.second + 1] += e.second;
	}

	for (int i = 1; i < v.size() + 2; i++) {
		for (int j = 1; j < v.size() + 2; j++) {
			res[i][j] += res[i][j - 1] + res[i - 1][j] - res[i - 1][j - 1];
		}
	}

	for (auto e : qu) {

		int x1 = lower_bound(v.begin(), v.end(), e.first.first) - v.begin();
		int y1 = lower_bound(v.begin(), v.end(), e.first.second) - v.begin();
		int x2 = lower_bound(v.begin(), v.end(), e.second.first) - v.begin();
		int y2 = lower_bound(v.begin(), v.end(), e.second.second) - v.begin();

		long long sum = res[x2 + 1][y2 + 1] - (res[x1][y2 + 1]) - (res[x2 + 1][y1]) + (res[x1][y1]);

		cout << sum << "\n";
	}

	return 0;
}