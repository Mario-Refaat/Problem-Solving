#include <bits/stdc++.h>
using namespace std;

int lower(vector<pair<int, int>>& v, pair<int, int> x) {

	int l = 0, r = v.size() - 1, ans = -1;
	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (v[mid].first < x.first || (v[mid].first == x.first && v[mid].second < x.second)) ans = mid, l = mid + 1;
		else r = mid - 1;
	}

	return ans;
}

int upper(vector<pair<int, int>>& v, pair<int, int> x) {

	int l = 0, r = v.size() - 1, ans = -1;
	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (v[mid].first > x.first || (v[mid].first == x.first && v[mid].second > x.second)) ans = mid, r = mid - 1;
		else l = mid + 1;
	}

	return ans;
}

string find(vector<pair<int, int>>& v, pair<int, int> x) {

	int l = 0, r = v.size() - 1;
	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (v[mid].first == x.first && v[mid].second == x.second) return "found";
		else if (v[mid].first == x.first && v[mid].second < x.second || v[mid].first < x.first) l = mid + 1;
		else r = mid - 1;
	}

	return "not found";
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, q;
	cin >> n >> q;

	vector<pair<int, int>>v(n);
	for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

	while (q--) {

		string s;
		pair<int, int> x;
		cin >> s >> x.first >> x.second;

		if (s == "lower") cout << lower(v, x) << "\n";
		else if (s == "upper") cout << upper(v, x) << "\n";
		else cout << find(v, x) << "\n";

	}

	return 0;
}