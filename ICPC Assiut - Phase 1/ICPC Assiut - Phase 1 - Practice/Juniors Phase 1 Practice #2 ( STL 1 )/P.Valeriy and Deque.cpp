#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, q, i = 0, mx = 0;
	cin >> n >> q;
	deque<int> dq(n);

	for (int i = 0; i < n; i++) {
		cin >> dq[i];
		mx = max(mx, dq[i]);
	}

	vector<pair<int, int>> res;

	while (dq[0] != mx) {
		res.push_back({ dq[0],dq[1] });
		int a = dq[0], b = dq[1];
		dq.pop_front(); dq.pop_front();
		if (a > b) { dq.push_front(a); dq.push_back(b); }
		else { dq.push_front(b); dq.push_back(a); }
		i++;
	}

	while (q--) {
		long long x;
		cin >> x;
		if (x <= i) cout << res[x - 1].first << " " << res[x - 1].second << "\n";
		else cout << mx << " " << dq[(x - i - 1) % (n - 1) + 1] << "\n";
	}

	return 0;
}