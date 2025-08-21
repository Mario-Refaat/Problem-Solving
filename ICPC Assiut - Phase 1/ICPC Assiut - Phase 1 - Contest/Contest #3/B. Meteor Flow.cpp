#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		long long n, h = 0, res = 0;
		cin >> n;

		vector<pair<int, int>>v(n + 1);
		for (int i = 1; i <= n; i++) cin >> v[i].first >> v[i].second;

		priority_queue<long long>pq;

		for (int i = 1; i <= n; i++) {

			h += v[i].first - v[i - 1].first;
			pq.push(v[i].second);

			if (h >= v[i].second) h -= v[i].second;
			else {
				res++;
				h += pq.top();
				h -= v[i].second;
				pq.pop();
			}
		}

		cout << res;
	}

	return 0;
}
