#include <iostream>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	stack<bool> st;
	int n, x;
	cin >> n;

	while (n--) {
		cin >> x;
		x %= 2;
		if (st.empty() || st.top() != x) st.push(x);
		else st.pop();
	}

	cout << (st.size() > 1 ? "NO" : "YES");

	return 0;
}