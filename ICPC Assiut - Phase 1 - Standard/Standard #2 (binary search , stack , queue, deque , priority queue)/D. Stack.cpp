#include <iostream>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	stack<int> st;
	int q, x;
	cin >> q;

	while (q--) {
		string s;
		cin >> s;

		if (s == "push") { cin >> x; st.push(x); }
		else if (s == "pop") st.pop();
		else cout << st.top() << endl;

	}

	return 0;
}
