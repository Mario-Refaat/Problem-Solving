#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		int n, m, k;
		cin >> n >> m >> k;

		vector<int> v(n + 1), res;
		multiset<int> st;

		for (int i = 1; i <= n; i++)cin >> v[i];

		for (int i = 1; i <= n; i++) {
			st.insert(v[i]);
			if (i >= m) {
				res.push_back(*st.begin());
				st.erase(st.begin());
			}
		}

		for (auto& e : st) res.push_back(e);

		cout << res[k - 1] << '\n';
	}

	return 0;
}
