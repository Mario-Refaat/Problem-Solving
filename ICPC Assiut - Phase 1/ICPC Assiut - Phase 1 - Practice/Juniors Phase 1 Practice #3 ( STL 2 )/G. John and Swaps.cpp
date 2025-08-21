#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		int n;
		cin >> n;

		set<vector<int>> st;
		vector <int> v(n);

		for (int i = 0; i < n; i++) cin >> v[i];

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				swap(v[i], v[j]);
				st.insert(v);
				swap(v[i], v[j]);
			}
		}

		cout << st.size() << '\n';
	}

	return 0;
}
