#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		long long n, res = 0;
		cin >> n;

		vector<int>v(n);
		for (int i = 0; i < n; i++) cin >> v[i];

		stack<pair<int, int>>st; st.push({ v[0],1 });
		for (int i = 1; i < n; i++) {

			while (!st.empty() && st.top().first < v[i]) {
				res += st.top().second;
				st.pop();
			}

			if (!st.empty() && v[i] == st.top().first) {
				res += st.top().second + (st.size() > 1);
				st.top().second++;
			}
			else {
				if (!st.empty())res++;
				st.push({ v[i],1 });
			}
		}

		cout << res;
	}

	return 0;
}