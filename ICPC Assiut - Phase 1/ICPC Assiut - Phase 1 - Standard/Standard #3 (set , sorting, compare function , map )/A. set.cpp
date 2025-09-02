#include <iostream>
#include <set>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	set<int> st;

	int q, x;
	cin >> q;

	while (q--) {

		string s;
		cin >> s >> x;

		if (s == "lower_bound") {
			set<int>::iterator pos = st.lower_bound(x);
			cout << (pos == st.end() ? -1 : *pos) << "\n";
		}
		else if (s == "upper_bound") {
			set<int>::iterator pos = st.upper_bound(x);
			cout << (pos == st.end() ? -1 : *pos) << "\n";
		}
		else if (s == "find") {
			cout << (st.find(x) != st.end() ? "found" : "not found") << "\n";
		}
		else {
			st.insert(x);
		}

	}

	return 0;
}
