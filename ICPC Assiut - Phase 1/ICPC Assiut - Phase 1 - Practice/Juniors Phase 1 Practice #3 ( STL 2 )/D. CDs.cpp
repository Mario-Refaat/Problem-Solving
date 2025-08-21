#include <iostream>
#include <set>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	set<int> st;
	int n, m, x, res = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++) { cin >> x; st.insert(x); }
	for (int i = 0; i < m; i++) { cin >> x; res += st.find(x) != st.end(); }

	cout << res;

	return 0;
}
