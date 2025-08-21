#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		long long n, res = 0;
		cin >> n;

		vector<long long>v(n), next(n), prev(n);
		for (int i = 0; i < n; i++) cin >> v[i];

		stack<int>st;

		for (int i = 0; i < n; i++) {
			while (!st.empty() && v[st.top()] < v[i]) {
				next[st.top()] = i;
				st.pop();
			}
			st.push(i);
		}

		while (!st.empty()) { next[st.top()] = n; st.pop(); }


		for (int i = n - 1; i >= 0; i--) {
			while (!st.empty() && v[st.top()] < v[i]) {
				prev[st.top()] = i;
				st.pop();
			}
			st.push(i);
		}

		while (!st.empty()) { prev[st.top()] = -1; st.pop(); }

		for (int i = 0; i < n; i++) {
			res += ((next[i] - i) * (i - prev[i])) * v[i];
		}

		cout << res;
	}

	return 0;
}
