#include <iostream>
#include <set>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	set<int> st;
	int arr[100001], n;
	cin >> n;

	for (int i = 0; i < n; i++) cin >> arr[i];

	int q, l = 0, r = n - 1;
	cin >> q;

	while (q--) {

		char ch;
		cin >> ch;

		if (ch == 'L' && l <= r) {
			st.insert(arr[l++]);
		}
		else if (ch == 'R' && l <= r) {
			st.insert(arr[r--]);
		}
		else if (ch == 'Q' && !st.empty()) {
			cout << *st.rbegin() << "\n";
			st.erase(*st.rbegin());
		}
		else if (ch == 'Q' && st.empty()) {
			cout << -1 << "\n";
		}

	}

	return 0;
}
