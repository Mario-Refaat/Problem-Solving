#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n , ans = INT_MAX;
	cin >> n;

	vector<int>v(n), vmx, vmn;
	for (int i = 0; i < n; i++) cin >> v[i];

	int mx = *max_element(v.begin(), v.end());
	int mn = *min_element(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		if (v[i] == mx)vmx.push_back(i);
		if (v[i] == mn)vmn.push_back(i);
	}

	for (auto& e : vmx) {
		int it1 = upper_bound(vmn.begin(), vmn.end(), e) - vmn.begin();
		int it2 = it1 - 1;

		if (it1 == vmn.size()) it1--;
		if (it2 == -1) it2++;

		ans = min(ans, min(abs(e - vmn[it1]), abs(e - vmn[it2])));
	}

	cout << ans;

	return 0;
}