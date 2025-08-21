#include <bits/stdc++.h>
using namespace std;

bool can(vector<int>& v, string& t, string& p, int& k) {

	vector<bool> flag(v.size(), true);
	for (int i = 0; i < k; i++) flag[v[i] - 1] = false;

	int j = 0;

	for (int i = 0; i < t.size(); i++)
		if (flag[i] && t[i] == p[j]) j++;

	return j == p.size();
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string t, p;
	cin >> t >> p;

	vector<int>v(t.size());
	for (int i = 0; i < v.size(); i++) cin >> v[i];

	int l = 0, r = v.size() - 1, ans;
	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (can(v, t, p, mid)) ans = mid, l = mid + 1;
		else r = mid - 1;
	}

	cout << ans;

	return 0;
}