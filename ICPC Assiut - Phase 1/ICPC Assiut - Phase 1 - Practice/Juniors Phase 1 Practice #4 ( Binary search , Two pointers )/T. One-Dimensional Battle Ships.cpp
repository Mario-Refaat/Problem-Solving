#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, k, a, m, x;
	cin >> n >> k >> a >> m;

	set<pair<int, int>>st;
	st.insert({ 1,n });
	int curr = (n + 1) / ++a;

	for (int i = 1; i <= m; i++) {

		cin >> x;
		auto p = st.lower_bound({ x,0 });
		if (p == st.end() || p->first > x)p--;

		curr -= (p->second - p->first + 2) / a;
		curr += (p->second - (x + 1) + 2) / a;
		curr += ((x - 1) - p->first + 2) / a;

		st.insert({ p->first , x - 1 });
		st.insert({ x + 1 , p->second });
		st.erase(p);

		if (curr < k) { cout << i; return 0; }

	}

	cout << -1;

	return 0;
}